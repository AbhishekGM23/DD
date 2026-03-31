#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/mutex.h>
#include <linux/wait.h>

#define DEVICE_NAME "pc_device"
#define BUFFER_SIZE 5
#define ITEM_SIZE   64

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Example");
MODULE_DESCRIPTION("Producer Consumer using read/write");

/* Circular buffer */
static char buffer[BUFFER_SIZE][ITEM_SIZE];
static int in = 0, out = 0, count = 0;

/* Synchronization */
static DEFINE_MUTEX(buffer_lock);
static DECLARE_WAIT_QUEUE_HEAD(not_full);
static DECLARE_WAIT_QUEUE_HEAD(not_empty);

/* Device */
static int major;

/* Write = Producer */
static ssize_t pc_write(struct file *file,
                        const char __user *user_buf,
                        size_t len,
                        loff_t *off)
{
    char item[ITEM_SIZE];

    if (len >= ITEM_SIZE)
        len = ITEM_SIZE - 1;

    /* Wait if buffer is full */
    wait_event_interruptible(not_full, count < BUFFER_SIZE);

    if (copy_from_user(item, user_buf, len))
        return -EFAULT;

    item[len] = '\0';

    mutex_lock(&buffer_lock);

    strncpy(buffer[in], item, ITEM_SIZE);
    in = (in + 1) % BUFFER_SIZE;
    count++;

    printk(KERN_INFO "Produced: %s (count=%d)\n", item, count);

    mutex_unlock(&buffer_lock);

    wake_up(&not_empty);
    return len;
}

/* Read = Consumer */
static ssize_t pc_read(struct file *file,
                       char __user *user_buf,
                       size_t len,
                       loff_t *off)
{
    char item[ITEM_SIZE];
    size_t item_len;

    /* Wait if buffer is empty */
    wait_event_interruptible(not_empty, count > 0);

    mutex_lock(&buffer_lock);

    strncpy(item, buffer[out], ITEM_SIZE);
    out = (out + 1) % BUFFER_SIZE;
    count--;

    printk(KERN_INFO "Consumed: %s (count=%d)\n", item, count);

    mutex_unlock(&buffer_lock);

    wake_up(&not_full);

    item_len = strnlen(item, ITEM_SIZE);

    if (len < item_len)
        item_len = len;

    if (copy_to_user(user_buf, item, item_len))
        return -EFAULT;

    return item_len;
}

static struct file_operations fops = {
    .owner = THIS_MODULE,
    .read  = pc_read,
    .write = pc_write,
};

/* Module init */
static int __init pc_init(void)
{
    major = register_chrdev(0, DEVICE_NAME, &fops);
    if (major < 0) {
        printk(KERN_ERR "Failed to register device\n");
        return major;
    }

    printk(KERN_INFO "pc_device registered with major %d\n", major);
    printk(KERN_INFO "Create device: mknod /dev/pc_device c %d 0\n", major);
    return 0;
}

/* Module exit */
static void __exit pc_exit(void)
{
    unregister_chrdev(major, DEVICE_NAME);
    printk(KERN_INFO "pc_device unregistered\n");
}

module_init(pc_init);
module_exit(pc_exit);

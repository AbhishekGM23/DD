#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x33b0e10c, "const_pcpu_hot" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3febc5d1, "cdev_add" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2ab7e564, "noop_llseek" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x66554082, "fasync_helper" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4b332a38, "USER_PTR_MAX" },
	{ 0x7a8c2623, "nonseekable_open" },
	{ 0x902e9281, "seq_read" },
	{ 0xd0809b8a, "tty_devnum" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3a099605, "__get_user_nocheck_4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3119fe5d, "kobject_set_name" },
	{ 0x666e61e9, "remove_proc_entry" },
	{ 0xd8ba0fc0, "__kmalloc_cache_noprof" },
	{ 0xfcbbf86c, "seq_printf" },
	{ 0x8d6aff89, "__put_user_nocheck_4" },
	{ 0x5427731d, "single_release" },
	{ 0xb8273d0b, "__wake_up_sync" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x361be725, "param_ops_int" },
	{ 0x4bb9d59e, "single_open" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x848b9552, "cdev_init" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc4aa18f, "kmalloc_caches" },
	{ 0x37e16a57, "cdev_del" },
	{ 0xa20ee11, "kobject_put" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x890d6aec, "kill_fasync" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1c9223, "seq_lseek" },
	{ 0xb97ef805, "proc_create_data" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbf1981cb, "module_layout" },
};

MODULE_INFO(depends, "");


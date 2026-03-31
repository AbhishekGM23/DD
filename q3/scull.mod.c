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
	{ 0x9f222e1e, "alloc_chrdev_region" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xc87f4bab, "finish_wait" },
	{ 0x5cfcdbd0, "kill_fasync" },
	{ 0x0d1b9332, "prepare_to_wait" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xfc8fa4ce, "seq_lseek" },
	{ 0x3df0a3ce, "proc_create_data" },
	{ 0x0db8d68d, "prepare_to_wait_event" },
	{ 0x16ab4215, "__wake_up" },
	{ 0xde338d9a, "_raw_spin_lock" },
	{ 0xd272d446, "__fentry__" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xe8213e80, "_printk" },
	{ 0xd272d446, "schedule" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xd272d446, "__put_user_4" },
	{ 0x4d40f3a6, "const_pcpu_hot" },
	{ 0x0c161ddc, "capable" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x4c1dbbd9, "cdev_add" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0x81d6dd8f, "noop_llseek" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x2ddcf4c9, "fasync_helper" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0x357aaab3, "mutex_lock_interruptible" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x27683a56, "memset" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0x5403c125, "__init_waitqueue_head" },
	{ 0xdae2bba8, "nonseekable_open" },
	{ 0xbd4e501f, "seq_read" },
	{ 0xfc09aa64, "tty_devnum" },
	{ 0x0bc5fb0d, "unregister_chrdev_region" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x7851be11, "__get_user_nocheck_4" },
	{ 0x483d3e0b, "kobject_set_name" },
	{ 0x33c78c8a, "remove_proc_entry" },
	{ 0x70db3fe4, "__kmalloc_cache_noprof" },
	{ 0xf2c4f3f1, "seq_printf" },
	{ 0xd272d446, "__put_user_nocheck_4" },
	{ 0xcb077514, "single_release" },
	{ 0xbc1e83c0, "__wake_up_sync" },
	{ 0x5ccfed25, "autoremove_wake_function" },
	{ 0xc5bd6261, "register_chrdev_region" },
	{ 0xc2614bbe, "param_ops_int" },
	{ 0x003b23f9, "single_open" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0xefd5d5d8, "cdev_init" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xfed1e3bc, "kmalloc_caches" },
	{ 0x0c72f9ad, "cdev_del" },
	{ 0xe125349f, "kobject_put" },
	{ 0xba157484, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x9f222e1e,
	0xa61fd7aa,
	0x092a35a2,
	0xd710adbf,
	0xc87f4bab,
	0x5cfcdbd0,
	0x0d1b9332,
	0xcb8b6ec6,
	0xfc8fa4ce,
	0x3df0a3ce,
	0x0db8d68d,
	0x16ab4215,
	0xde338d9a,
	0xd272d446,
	0x5a844b26,
	0xe8213e80,
	0xd272d446,
	0xd272d446,
	0xd272d446,
	0x4d40f3a6,
	0x0c161ddc,
	0x90a48d82,
	0x4c1dbbd9,
	0x7a5ffe84,
	0x81d6dd8f,
	0xbd03ed67,
	0xf46d5bf3,
	0x2ddcf4c9,
	0xc1e6c71e,
	0x357aaab3,
	0xe54e0a6b,
	0x27683a56,
	0xd272d446,
	0x092a35a2,
	0x5403c125,
	0xdae2bba8,
	0xbd4e501f,
	0xfc09aa64,
	0x0bc5fb0d,
	0xf46d5bf3,
	0x7851be11,
	0x483d3e0b,
	0x33c78c8a,
	0x70db3fe4,
	0xf2c4f3f1,
	0xd272d446,
	0xcb077514,
	0xbc1e83c0,
	0x5ccfed25,
	0xc5bd6261,
	0xc2614bbe,
	0x003b23f9,
	0xde338d9a,
	0xefd5d5d8,
	0x7851be11,
	0xfed1e3bc,
	0x0c72f9ad,
	0xe125349f,
	0xba157484,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"alloc_chrdev_region\0"
	"__check_object_size\0"
	"_copy_from_user\0"
	"__kmalloc_noprof\0"
	"finish_wait\0"
	"kill_fasync\0"
	"prepare_to_wait\0"
	"kfree\0"
	"seq_lseek\0"
	"proc_create_data\0"
	"prepare_to_wait_event\0"
	"__wake_up\0"
	"_raw_spin_lock\0"
	"__fentry__\0"
	"__x86_indirect_thunk_rax\0"
	"_printk\0"
	"schedule\0"
	"__stack_chk_fail\0"
	"__put_user_4\0"
	"const_pcpu_hot\0"
	"capable\0"
	"__ubsan_handle_out_of_bounds\0"
	"cdev_add\0"
	"init_wait_entry\0"
	"noop_llseek\0"
	"random_kmalloc_seed\0"
	"mutex_lock\0"
	"fasync_helper\0"
	"__mutex_init\0"
	"mutex_lock_interruptible\0"
	"__fortify_panic\0"
	"memset\0"
	"__x86_return_thunk\0"
	"_copy_to_user\0"
	"__init_waitqueue_head\0"
	"nonseekable_open\0"
	"seq_read\0"
	"tty_devnum\0"
	"unregister_chrdev_region\0"
	"mutex_unlock\0"
	"__get_user_nocheck_4\0"
	"kobject_set_name\0"
	"remove_proc_entry\0"
	"__kmalloc_cache_noprof\0"
	"seq_printf\0"
	"__put_user_nocheck_4\0"
	"single_release\0"
	"__wake_up_sync\0"
	"autoremove_wake_function\0"
	"register_chrdev_region\0"
	"param_ops_int\0"
	"single_open\0"
	"_raw_spin_unlock\0"
	"cdev_init\0"
	"__SCT__might_resched\0"
	"kmalloc_caches\0"
	"cdev_del\0"
	"kobject_put\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F6483ADDA9742FD9048E496");

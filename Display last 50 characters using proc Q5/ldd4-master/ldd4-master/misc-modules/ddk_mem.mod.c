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
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xfed1e3bc, "kmalloc_caches" },
	{ 0x70db3fe4, "__kmalloc_cache_noprof" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0x655f3bb2, "usb_register_dev" },
	{ 0x837202b8, "usb_control_msg" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x4d11ee09, "usb_find_interface" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0x76a26ca1, "usb_interrupt_msg" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0x67628f51, "msleep" },
	{ 0xd272d446, "__fentry__" },
	{ 0xaba46e12, "usb_register_driver" },
	{ 0xe8213e80, "_printk" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x0a2ff406, "usb_deregister_dev" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xef4e4365, "usb_deregister" },
	{ 0xba157484, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xbd03ed67,
	0xfed1e3bc,
	0x70db3fe4,
	0xc1e6c71e,
	0x655f3bb2,
	0x837202b8,
	0xd272d446,
	0x4d11ee09,
	0xd710adbf,
	0xa61fd7aa,
	0x092a35a2,
	0x76a26ca1,
	0x092a35a2,
	0x67628f51,
	0xd272d446,
	0xaba46e12,
	0xe8213e80,
	0xd272d446,
	0x0a2ff406,
	0xf46d5bf3,
	0xf46d5bf3,
	0xcb8b6ec6,
	0xef4e4365,
	0xba157484,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"__mutex_init\0"
	"usb_register_dev\0"
	"usb_control_msg\0"
	"__stack_chk_fail\0"
	"usb_find_interface\0"
	"__kmalloc_noprof\0"
	"__check_object_size\0"
	"_copy_to_user\0"
	"usb_interrupt_msg\0"
	"_copy_from_user\0"
	"msleep\0"
	"__fentry__\0"
	"usb_register_driver\0"
	"_printk\0"
	"__x86_return_thunk\0"
	"usb_deregister_dev\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"kfree\0"
	"usb_deregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v16C0p05DCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "85B02FFB263CB19BFA17809");

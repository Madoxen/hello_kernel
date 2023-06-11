#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

static int __init hello2_init(void)
{
	pr_info("Hello world 2\n");

	return 0;
}


static void __exit hello2_exit(void)
{
	pr_info("Goodbye world 2\n");
}

module_init(hello2_init);
module_exit(hello2_exit);

MODULE_LICENSE("GPL");

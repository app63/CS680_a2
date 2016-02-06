
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int hello1_init(void)
{
	printk(KERN_INFO "Aditya: Loading Hello1 module - Hello world 1.\n");
	return 0;
}

static void hello1_exit(void)
{
	printk(KERN_INFO "Aditya: Exiting Hello1 module - Goodbye world 1.\n");
}

module_init(hello1_init);
module_exit(hello1_exit);

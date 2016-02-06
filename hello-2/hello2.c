#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int hello2_data __initdata = 2;

static int __init hello_2_init(void)
{
	printk(KERN_INFO "Aditya: Loading Hello%d module - Hello, world %d\n", hello2_data, hello2_data);
	return 0;
}

static void __exit hello_2_exit(void)
{
	printk(KERN_INFO "Aditya: Exiting Hello2 module - Goodbye, world 2\n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);

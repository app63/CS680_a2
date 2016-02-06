#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>


static char *myname = "Pujari";
static char *street = "Warren St";
static char *city = "Newark";
static int zip = 07032;

module_param(myname, charp, 0000);
MODULE_PARM_DESC(myname, "My name");
module_param(street, charp, 0000);
MODULE_PARM_DESC(street, "Address");
module_param(city, charp, 0000);
MODULE_PARM_DESC(city, "Current city");
module_param(zip, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(zip, "zip code");


static int __init hello3_init(void)
{
	printk(KERN_INFO "kernel: Loading Hello 3: Hello World 3 \n"); 
	printk(KERN_INFO "kernel: ============================== \n");
	printk(KERN_INFO "kernel: Name : %s\n", myname);
	printk(KERN_INFO "kernel: Street : %s\n", street);
	printk(KERN_INFO "kernel: City : %s\n", city);
	printk(KERN_INFO "kernel: ZIP code : %d", zip);
	return 0;
}

static void __exit hello3_exit(void)
{
	printk(KERN_INFO "kernel: Goodbye, world 3\n");
}

module_init(hello3_init);
module_exit(hello3_exit);

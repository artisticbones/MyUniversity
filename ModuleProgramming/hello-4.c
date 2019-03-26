/*
 * hello-4.c - Demonstrates module documentation.
 */
#include <linux/module.h>	//Needed by all modules
#include <linux/kernel.h>	//Needed for KERN_INFO
#include <linux/init.h>		//Needed for macros
#define DRIVER_AUTHOR "Cheng FeiTian <artisticbones@163.com>"
#define DRIVER_DESC   "A simple driver"

static int hello4_data __initdata = 4;

static int __init hello_4_init(void)
{
	printk(KERN_INFO "Hello,world %d\n",hello4_data);
	return 0;
}

static void __exit hello_4_exit(void)
{
	printk(KERN_INFO "Goodbye,world 4\n");
}

module_init(hello_4_init);
module_exit(hello_4_exit);

/*Get rid of error message by declaring code as GPL*/
MODULE_LICENSE("GPL");

//use defines,like this:

MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

MODULE_SUPPORTED_DEVICE("testdevice");

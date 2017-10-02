/*
 * Se puede referir al capítulo 2.6 del libro: The Linux Kernel Module Programming Guide - Salzman, Burian y Pomerantz.
*/
#include <linux/init.h>
#include <linux/module.h>

int arg = 3;
module_param(arg, int, 0);

static int hello_init(void)
{
	printk("arg: %d\n", arg);
	return 0;
}

static void hello_exit(void)
{
	printk("Goodbye\n");
}

module_init(hello_init);
module_exit(hello_exit);

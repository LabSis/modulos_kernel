/*
Chapter 2: Building and Running modules. Linux Device Driver 3.
*/

#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void)
{
    printk(KERN_EMERG "Hello world (KERN_EMERG)\n");
	printk(KERN_ALERT "Hello world (KERN_ALERT)\n");
	printk(KERN_CRIT "Hello world (KERN_CRIT)\n");
	printk(KERN_ERR "Hello world (KERN_ERR)\n");
	printk(KERN_WARNING "Hello world (KERN_WARNING)\n");
	printk(KERN_NOTICE "Hello world (KERN_NOTICE)\n");
	printk(KERN_INFO "Hello world (KERN_INFO)\n");
	printk(KERN_DEBUG "Hello world (KERN_DEBUG)\n");
	printk(KERN_DEFAULT "Hello world (KERN_DEFAULT)\n");
	printk(KERN_CONT "Hello world (KERN_CONT)\n");
	printk("Hello world\n");
	return 0;
}

static void hello_exit(void)
{
    printk(KERN_EMERG "Goodbye (KERN_EMERG)\n");
    printk(KERN_ALERT "Goodbye (KERN_ALERT)\n");
    printk(KERN_CRIT "Goodbye (KERN_CRIT)\n");
    printk(KERN_ERR "Goodbye (KERN_ERR)\n");
    printk(KERN_WARNING "Goodbye (KERN_WARNING)\n");
    printk(KERN_NOTICE "Goodbye (KERN_NOTICE)\n");
    printk(KERN_INFO "Goodbye (KERN_INFO)\n");
	printk(KERN_DEBUG "Goodbye (KERN_DEBUG)\n");
	printk(KERN_DEFAULT "Goodbye (KERN_DEFAULT)\n");
	printk(KERN_CONT "Goodbye (KERN_CONT)\n");
	printk("Goodbye\n");
}

module_init(hello_init);
module_exit(hello_exit);

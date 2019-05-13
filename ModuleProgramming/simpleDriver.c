#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/interrupt.h>
#include <linux/fs.h>
#include <asm/uaccess.h>
#include <asm/io.h>
#include<linux/timer.h>
#include <plat/irqs.h>
#include<linux/jiffies.h>
#include <linux/delay.h>
#include <linux/input.h>
 
static volatile unsigned int *GPJ2CON;
static volatile unsigned int *GPJ2DAT;
static volatile unsigned int *GPH2CON;
static volatile unsigned int *GPH2DAT;
 
struct timer_list time;
static int major,flag = 0;
//第一步：定义一个输入设备的结构体
struct input_dev *input_dev;
 
irqreturn_t key_interr(int irqno,void *dev)
{
	if( !( (*GPH2DAT) & 1 )) //有按键(K1)按下，修改定时时间，重新激活定时器，定时20ms	
		mod_timer(&time,jiffies + msecs_to_jiffies(20));	//修改定时时间
			
	return IRQ_HANDLED;
}
 
/*定时器处理函数*/
static void timer_fun(unsigned long arg)
{
	if( !( (*GPH2DAT) & 1 ))//如果按键还是低电平（继续按下）执行以下程序
	{
		printk("hello keyboard\n");
		
		//第二步：填充上报事件
		/*填充上报事件,报告事件（按下或者不按）*/
		input_report_key(input_dev,KEY_0,1);//
		input_report_key(input_dev,KEY_0,0);
		input_sync(input_dev);//同步结束
 
		flag = ~flag;
		if(0 == flag)
			*GPJ2DAT &= 0xf0;//点亮LED
		else
			*GPJ2DAT |= 0x0f;//熄灭LED
	}
}
 
static int led_open(struct inode *pi, struct file *pf)
{
	GPJ2CON = ioremap(0xe0200280,8);//物理地址映射成核心虚地址
	GPJ2DAT = GPJ2CON + 1;
	
	GPH2CON = ioremap(0xe0200c40,8);
	GPH2DAT = GPH2CON+1;
 
	*GPJ2CON &= 0xffff0000;
	*GPJ2CON |= 0x00001111;	//设置为输出
	*GPJ2DAT |= 0x0f;	//熄灭所有LED
	
	*GPH2CON |= 0x0000000f;	//K1键设置为外部中断
	
	init_timer(&time);//初始化定时器
	time.function = &timer_fun;
	time.expires = jiffies + msecs_to_jiffies(20);
	add_timer(&time);//添加，启动定时器
	
	request_irq(IRQ_EINT(16),key_interr,IRQF_TRIGGER_FALLING,"key1",NULL);//中断请求函数
	
	return 0;
}
 
static ssize_t led_write(struct file *pf, const char __user *pbuf, size_t len, loff_t *ppos)
{
	
	return 0;
}
 
ssize_t led_read (struct file *pf, char __user *pbuf, size_t count, loff_t *off)
{
	
	return 0;
}
 
static int led_release(struct inode *pi, struct file *pf)
{
	del_timer(&time);//删除定时器
	printk("<kernel> test release.\n");
	return 0;
}
 
static struct file_operations t_fops=
{
	.owner		= THIS_MODULE,
	.open 		= led_open,
	.release	= led_release,
	.write 		= led_write,
	.read 		= led_read,
};
 
static __init int led_init(void)
{
	major = register_chrdev(0,"LED",&t_fops);
	printk("major = %d\n",major);
	
	//第三步：构造一个input设备，设置支持的事件类型，将设备注册到内核中。（一般在程序的初始化中）
	/*构造一个input设备*/
	input_dev = input_allocate_device();
	input_dev->name = "key_input_dev";
	
	/*设备input设备支持的事件类型。*/
	set_bit(EV_KEY,input_dev->evbit);//（支持哪些事件）设置事件类型
	set_bit(KEY_0,input_dev->keybit);//（哪个按键）设置按键类型
	
	/*将设备注册到内核*/
	input_register_device(input_dev);
	
	return 0;
}
 
static __exit void led_exit(void)
{
	iounmap(GPJ2CON);
	iounmap(GPH2CON);
	unregister_chrdev(major,"LED");
	free_irq(IRQ_EINT(16),NULL);
	
	/*退出模块时清除此input设备*/
	input_unregister_device(input_dev);
}
 
module_init(led_init);
module_exit(led_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cheng Feitian");
MODULE_DESCRIPTION("This is the interrupt");

/*setecho.c
 * usage:setecho[y|n]
 * shows:how to read,change,reset tty attributes
 * copyright@ Cheng Feitian
 */

#include <stdio.h>
#include <termios.h>

#define oops(s,x) {perror(s);exit(x);}

echostate()
{
	struct termios info;

	if(tcgetattr(0,&info) == -1)
		oops("tcgetattr",1);
	if (info.c_lflag & ECHO)
		printf("echo is on,since its bit is 1\n");
	else
		printf("echo is OFF,since its bit is 0\n");
}

setecho(int av[])
{
	struct termios info;
	//if (ac==1)
	//	exit(0);
	if (tcgetattr(0,&info) == -1)
		oops("tcgetattr",1);
	if (av[1] == 'y')
		info.c_lflag |= ECHO;
	else
		info.c_lflag &= ~ECHO;
	if (tcsetattr(0,TCSANOW,&info) == -1)
		oops("tcgetattr",2);
}

main(int ac,int *av[])
{
	char cmd[5];
	
	echostate();
	while(1)
	{
		printf("please choose one choice:\n");
		printf("1.echostate 2.setecho 3.quit\n");

		if (gets(cmd)!=NULL)
		{
			if (strcmp(cmd,"1") == 0)
			{
				echostate();
			}

			if (strcmp(cmd,"2") == 0)
			{
				char module[5];
				printf("please input the module you want(y | n)\n");
				if (gets(module) != NULL)
				{
					setecho(module);
				}
			}

			if (strcmp(cmd,"3") == 0)
			{
				break;
			}

			if (strcmp(cmd,"quit") == 0)
			{
				break;
			}
		}
	}
}

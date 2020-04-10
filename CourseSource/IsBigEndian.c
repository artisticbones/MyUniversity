#include <stdio.h>

void main()
{
	union NUM
	{
		int a;
		char b;
	}num;
	num.a = 0x1234;
	if(num.b == 0x12)
	{
		printf("大端存储\n");
	}
	else
		printf("小端存储\n");
}

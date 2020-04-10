#include <stdio.h>

int main()
{
	char a=0;
	short int b = 0;
	return sizeof(b) == sizeof(a+b);
	printf("%d",b);
}

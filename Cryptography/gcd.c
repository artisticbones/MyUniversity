#include <stdio.h>

int gcd(int a,int b)
{
	if (a%b==0)
	{
		return b;
	}
	return gcd(b,a%b);
}

void main()
{
	int a=18,b=11;
	printf("%d",gcd(a,b));
}

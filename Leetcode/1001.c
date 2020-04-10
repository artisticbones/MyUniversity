#include <stdio.h>
int do_Callatz(int );
int main(){
	int n,times=0;
	printf("请输入数值:");
	if(scanf("%d",&n));
	times=do_Callatz(n);
	printf("经过%d次运算后得到1\n",times);
	return 0;
}

int do_Callatz(int num){
	int i=0,numTemp=0;
	while(num != 1){
		if (num % 2 == 0){
			numTemp = num / 2;
			num = numTemp;
		}
		else{
			numTemp = num *3 +1;
			num = numTemp / 2;
		}
		i++;
	}
	return i;
}

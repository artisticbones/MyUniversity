#include <stdio.h>
#define N 5
#define M 100

int main(){
	int j=0,i=0,temp=0;
	char array[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char num[M];
	int index[N];
/*	for(i=0;i<50;i++){
		num[i] = -1;
	}*/
	for(i=0;i<N;i++){
		index[i] = -1;
	}
	if(scanf("%s",num));
	i = 0;
	while (num[i]!='\0'){
		//int temp = 0;
		temp += (num[i] - '0');
		i++;
	}
	//printf("%d\n",temp);
	while (temp > 0){
		index[j] = temp % 10 ;
		temp = temp / 10;
		j++;
	}

	for (j=N-1;j>=0;j--){
		if(index[j] != -1){
			printf("%s",array[index[j]]);
			if(j!=0){
				printf(" ");
			}
		}
	}
	return 0;
}


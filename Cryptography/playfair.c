#include <stdio.h>
#include <string.h>

char x = 'X';
char K[] = "fivestars";
char M[] = "Playfairs cipher was actually invented by wheatstone";

int flag[26] ={0,0,0,0,0, 0,0,0,0,1, 0,0,0,0,0, 0,0,0,0,0, 0};

int duplicate(char a,char b[]){//判断字符是否出现在数组内，没有则加入
	int i,flag=1;	//字符第一次出现flag=1
	for(i=0;i<strlen(b);i++){
		if (b[i] == a){
			flag = 0;	//flag置零证明字符出现过不在加入
		}
	}
	return flag;
}

void initkey(char k[],char t[],int flag[]){//初始化秘钥，k[]是原始秘钥,t[]转化后的
	int i;
	for(i=0;k[i]!='\0';i++){
		if(k[i] == ' ')
			continue;
		if(k[i]>='a' && k[i]<='z'){
			k[i] = k[i]-32;
		}
		if(k[i] == 'J')
			k[i] = 'I';
		if(duplicate(k[i],t)){
			t[strlen(t)] = k[i];	//由于strlen函数的原因所以在最末尾
			flag[k[i]-'A'] = 1;	//标记在字母表中表示该字母出现过
		}
	}
	t[strlen(t)] = '\0';
	printf("Init key：",t);
	printf("\n");
}

void initPlain(char source[],char trans[]){
	int i,j=0;
	for(i=0;source[i]!='\0';i++){
                if(source[i] == ' ')
                        continue;
                if(source[i]>='a' && source[i]<='z'){
                        source[i] = source[i]-32;
                }
                if(source[i] == 'J')
                        source[i] = 'I';
		trans[j] = source[i]; //将转化后的付给新数组
		j++;
		//两个字母一对，判断这两个字母是否相同，相同则用X代替
		if(j%2 == 0){
			if (trans[j-1] == trans[j-2]){
				trans[j] = trans[j-1];
				trans[j-1] = x;
				j++;
			}
		}
		if(strlen(trans)%2!=0){//若明文不为偶数，则为最后一位凑一位，为p2=p1+1
			trans[strlen(trans)] = trans[strlen(trans)-1] + 1;
		}
	}
	trans[strlen(trans)] = '\0';
	printf("Init M:",trans);
	printf("\n");
}

void createTable(char key[]){//创建字母表
	int i;
	for(i=0;i<26;i++){
		if(flag[i] == 0)
			key[strlen(key)] = i + 'A'; //剩余字母无重复添加到key中
	}
	key[strlen(key)] = '\0';
	for(i=0;i<25;i++){
		printf("%c",key[i]);
		if((i+1)%5==0)
			printf("\n");
	}

}

void grid(char a[],char c,int &x,int &y){//获取明文在字母表中的坐标
	int k=0;
	for(k=0;a[k]!='\0';k++){
		if (a[k] == c){
			x = k/5;
			y = k%5;
		}
	}
}

void encrypt(char key[],char plain[],char cipher[]){//开始加密
	int k,i,j,m,n;
	for(k=0;plain[k]!='\0';k+=2){
		grid(key,plain[k],i,j);
		grid(key,plain[k+1],m,n);
		if(i == m){	//在同一行
			cipher[k] = key[(i/5) + ((j+1)%5)];
			cipher[k+1] = key[(m/5) + ((n+1)%5)];
		}
		else if (j == n){
			cipher[k] = key[((i+1)%5)*5+j];
                        cipher[k+1] = key[((m+1)%5)*5+n];
		}
		else{
			cipher[k] = key[i*5+n];
			cipher[k+1] = key[m*5+j];
		}
	}
	printf("Encrypt:",cipher);
	printf("\n");
}

int main()
{
	int i,j,k;
	int c=0;
	int key[100],plain[100],cipher[100];
	printf("K:\n",K);
	printf("M:\n",M);
	initkey(K,key,flag);
	createTable(key);
	initPlain(M,plain);
	encrypt(key,plain,cipher);
	return 0;
}

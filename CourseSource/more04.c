#include <stdio.h>
#include <stdlib.h>
#define LINELEN 512
#define PAGELEN 24
void do_more(FILE *);
int see_more(FILE *,int );
int sum_size = 0;
int main(int ac,char *av[]){
	FILE *fp;
	system("stty -icanon"); //关闭缓冲区,不用回车
        system("stty -echo");//输入的不回显
	if(ac == 1)
		do_more(stdin);
	else
		while(--ac){
			if((fp = fopen(* ++av,"r")) != NULL){
				fseek(fp,0L,SEEK_END);
				sum_size = ftell(fp);
				printf("\n the type of file is: %d\n",sum_size);
				fseek(fp,0L,SEEK_SET);
				do_more(fp);
				fclose(fp);
			}
			else
				exit(1);
		}
	system("stty icanon"); //解除关闭缓冲区,不用回车
        system("stty echo");//解除输入的不回显
	return 0;
}

void do_more(FILE *fp){
	char line[LINELEN];
	int num_of_lines = 0;
	int see_more(FILE *,int),reply;
	FILE *fp_tty;
	fp_tty = fopen("/dev/tty","r");
	if(fp_tty == NULL)
		exit(1);
	while(fgets(line ,LINELEN,fp)){
		if(num_of_lines == PAGELEN){
			int cur_size = ftell(fp);
			int per = (int)100* cur_size/sum_size;
			reply = see_more(fp_tty,per);
			printf("\r\033[K");
			/*for (int i = 0;i < 512; i++ ){
				printf("\b");
				printf(" ");
				printf("\b");
			}*/
			if(reply == 0)
				break;
			num_of_lines -=reply;	
		}
		if(fputs(line,stdout) == EOF)
			exit(1);
		num_of_lines++;
	}
}

int see_more(FILE *cmd,int per){
	int c;
	//system("stty -icanon");	//关闭缓冲区,不用回车
	//system("stty -echo");//输入的不回显
	printf("\033[7m --更多-- (%d%)\033[m",per);
	while((c = getc(cmd)) != EOF){
		if(c == 'q')
			return 0;
		if(c == ' '){
			return PAGELEN;
		}
		if(c == '\n'){
			printf("\b\r");
			return 1;
		}
	}
	return 0;
}

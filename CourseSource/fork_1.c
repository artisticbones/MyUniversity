/* fork_1.c
 * purpose	learn how to use fork function
 * copyright@	ChengFeitian
 */


#include <unistd.h>  
#include <stdio.h>   
int main ()   
{   
    pid_t fpid; //fpid表示fork函数返回的值  
    int count=0;  
    fpid=fork();   
    if (fpid < 0)   
        printf("error in fork!");   
    else if (fpid > 0) { 
	printf("i am the parent process, my process id is %d\n",getpid());   
        printf("我是孩子他爹\n");   
        count++;  
    }  
    else {  
        printf("i am the child process, my process id is %d\n",getpid());   
        printf("我是爹的儿子\n");  
        count++;  
    }  
    printf("统计结果是: %d\n",count);  
    return 0;  
} 

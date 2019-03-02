//signal()函数的返回值
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <signal.h>

void catch_signal(int sign)
{
    switch (sign)
    {
    case SIGINT:
        printf("ctrl + C 被执行了!\n");
        //exit(0);
        break;
    case SIGQUIT:
	printf("ctrl + D 被执行了!\n");
	break;
    }
}

int main(int arg, char *args[])
{
    /*
     * signal()函数的返回值是signal()函数上一次的行为
     * */
    typedef void (*sighandler_t)(int);
    //因为第一次注册信号SIGINT,所以上一次的行为就是默认行为
    sighandler_t old=signal(SIGINT, catch_signal);
    if(old==SIG_ERR)
    {
        //注册信号失败
        perror("signal error");
    }
    /*正规写法*/
    if(signal(SIGQUIT,catch_signal)==SIG_ERR)
    {
        //注册新号失败
        perror("signal error");
    }
    char tempc = 0;
    while ((tempc = getchar()) != 'a')
    {
        printf("tempc=%d\n", tempc);
        //sleep()
    }
    //把默认行为重新注册，不就是恢复默认信号了
    signal(SIGINT, old);
    signal(SIGQUIT, old);
    while (1)
    {
        pause();
    }
    printf("game over!\n");
    return 0;
}

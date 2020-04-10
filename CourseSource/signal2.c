//恢复信号
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
    }
}

int main(int arg, char *args[])
{
    //注册终端中断信号
    signal(SIGINT, catch_signal);
    char tempc = 0;
    while ((tempc = getchar()) != 'a')
    {
        printf("tempc=%d\n", tempc);
        //sleep()
    }
    //恢复信号
    signal(SIGINT, SIG_DFL);
    while (1)
    {
        pause();
    }
    printf("game over!\n");
    return 0;
}

/**
 * Author@ Cheng Feitian
 * Date: 2020-1-31
 * Description: 猜1 - 100范围以内的数字游戏
 * Input Format: 整型 
 * Output Format: 猜对所用的次数
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    srand(time(0));
    int number = rand() % 100 + 1;
    int count = 0,a = 0;

    /**
     * 程序主逻辑
     * 
     */
    printf("我已经想好了1~100之间的数。");
    do
    {
        printf("请猜这个数：");
        if (scanf("%d",&a) != EOF)
        {
            count++;
            if (a > number)
            {
                printf("您猜的这个数大了。\n");
            }else if (a < number){
                printf("您猜的这个数小了。\n");
            }
        }
        
    } while (a != number);
    printf("太好了，您用了%d次就猜到了答案！\n",count);

    return 0;
}

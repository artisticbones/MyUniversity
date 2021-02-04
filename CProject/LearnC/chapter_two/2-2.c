/**
 * Author@ Cheng Feitian
 * Date: 2020-2-4
 * Description: 月用电量50千瓦时（含50千瓦时）以内的，电价为0.53元/千瓦时；
 * 超过50千瓦时的，超出部分的用电量，电价上调0.05元/千瓦时。请编写程序计算电费。
 * Input Format: 输入在一行中给出某用户的月用电量（单位：千瓦时） 
 * Output Format: 在一行中输出该用户应支付的电费（元），结果保留两位小数，格式如：“cost = 应付电费值”；若用电量小于0，则输出"Invalid Value!"。
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int power = 0;
    float cost = 0.0;
    /* 主逻辑 */
    if (scanf("%d",&power) != EOF)
    {
        if (power <= 50 && power >= 0)
        {
            cost += power * 0.53;
            printf("cost = %.2f",cost);
        }else if (power > 50)
        {
            cost += (50 * 0.53 + (power - 50) * (0.53 + 0.05));
            printf("cost = %.2f",cost);
        }else{
            printf("Invalid Value!");
        }
    }

    return 0;
}

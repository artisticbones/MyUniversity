/**
 * Author@ Cheng Feitian
 * Date: 2020-2-4
 * Description: 本题要求编写程序，计算4个整数的和与平均值。题目保证输入与输出均在整型范围内。
 * Input Format: 输入在一行中给出4个整数，其间以空格分隔。
 * Output Format: 在一行中按照格式“Sum = 和; Average = 平均值”顺序输出和与平均值，其中平均值精确到小数点后一位。
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int sum = 0;
    float average = 0.0;
    int a,b,c,d;
    /* 主逻辑 */
    if (scanf("%d %d %d %d",&a,&b,&c,&d) != EOF)
    {
        sum = a + b + c + d;
        average = sum / 4.0;
        printf("Sum = %d; Average = %.1f",sum,average);
    }    

    return 0;
}

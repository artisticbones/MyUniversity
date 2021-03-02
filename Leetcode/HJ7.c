/**
 * Author@ Cheng Feitian
 * Date: 2020-3-2
 * Description: 写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。
 * Input Format: 输入一个正浮点数值
 * Output Format: 输出该数值的近似整数值
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    float num = 0.0;
    /* 主逻辑 */
    if (scanf("%f",&num) != EOF)
    {
        int convert = (int)(num + 0.5);
        printf("%d\n",convert);
    }
    

    return 0;
}

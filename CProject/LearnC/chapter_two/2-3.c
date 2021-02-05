/**
 * Author@ Cheng Feitian
 * Date: 2020-2-5
 * Description: 求平方与倒数序列的部分和
 * Input Format: 输入在一行中给出两个正整数m和n（m≤n），其间以空格分开。
 * Output Format: 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int m,n;
    double sum = 0.0;
    /* 主逻辑 */
    if (scanf("%d %d",&m,&n) != EOF)
    {
        if (m <= n)
        {
            for (int i = m; i <= n; i++)
            {
                sum += (i * i + 1.0 / i);
            }
            printf("sum = %.6f",sum);
        }
        else{

        }
    }
    
    return 0;
}

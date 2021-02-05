/**
 * Author@ Cheng Feitian
 * Date: 2020-2-5
 * Description: 本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和
 * Input Format: 输入在一行中给出一个正整数N
 * Output Format: 在一行中输出部分和的值，结果保留三位小数。
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int N = 0;
    float sum = 0.0;
    float flag = 1.0;
    /* 主逻辑 */
    if (scanf("%d",&N) != EOF)
    {
        for (int i = 1; i <= N; i++)
        {
            sum += flag * i / (2 * i - 1);
            flag = -flag;
        }
        printf("%.3f",sum);
    }
    
    return 0;
}

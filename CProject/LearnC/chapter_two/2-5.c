/**
 * Author@ Cheng Feitian
 * Date: 2020-2-5
 * Description: 求平方根序列前N项和
 * Input Format: 输入在一行中给出一个正整数N
 * Output Format: 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后两位。题目保证计算结果不超过双精度范围。
 */

#include <stdio.h>
#include <math.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int N;
    double sum = 0.0;
    /* 主逻辑 */
    if (scanf("%d",&N) != EOF)
    {
        for (int i = 1; i <= N; i++)
        {
            sum += sqrt(i);
        }
        printf("sum = %.2f",sum);
    }
    
    return 0;
}

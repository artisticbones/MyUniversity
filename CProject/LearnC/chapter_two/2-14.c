/**
 * Author@ Cheng Feitian
 * Date: 2020-1-29
 * Description: 本题要求编写程序，计算序列 1 + 1/3 + 1/5 + ... 的前N项之和。
 * Input Format: 输入在一行中给出一个正整数N。
 * Output Format: 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后6位。题目保证计算结果不超过双精度范围。
 */

#include <stdio.h>

int main(void) {

    int N = 0;
    double sum = 0;
    if (scanf("%d",&N) != EOF)
    {
        for (int i = 1; i <= N; i++)
        {
            sum += (1.0 / (2 * i - 1));
        }
        printf("sum = %.6f",sum);
    }

    return 0;
}

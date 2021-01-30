/**
 * Author@ Cheng Feitian
 * Date: 2020-1-29
 * Description: 输入一个非负整数n，生成一张3的乘方表，输出3的0次方~3的n次方，可调用幂函数计算3的乘方。
 * Input Format: 输入在一行中给出一个非负整数n
 * Output Format: 按照幂的递增顺序输出n+1行，每行格式为“pow(3,i) = 3的i次幂的值”。题目保证输出数据不超过长整型整数的范围
 */

#include <stdio.h>
#include <math.h>

#define CONSTANT 3

int main(void) {

    int n = 0;
    if (scanf("%d",&n) != EOF)
    {
        for (int i = 0; i <= n; i++)
        {
            printf("pow(3,%d) = %d\n",i,(int)pow(CONSTANT,i));
        }
    }

    return 0;
}

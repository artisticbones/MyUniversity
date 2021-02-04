/**
 * Author@ Cheng Feitian
 * Date: 2020-1-29
 * Description:求组合数 
 * Input Format: 输入在一行中给出两个正整数m和n（m≤n），以空格分隔。
 * Output Format: 按照格式“result = 组合数计算结果”输出。题目保证结果在double类型范围内。
 */

#include <stdio.h>
#include <math.h>

#define MAXSIZE 1024

double fact(int n){

    double result = 1.0;
    
    for (int i = n; i > 1; i--)
    {
        result *= i;
    }

    return result;
}

int main(void) {

    int m,n;

    if (scanf("%d %d",&m,&n) != EOF)
    {
           if (m <= n)
           {
               int combination = fact(n) / (fact(m) * fact(n - m));
               printf("result = %d",combination);
           }
           else{
               return 0;
           }
    }

    return 0;
}

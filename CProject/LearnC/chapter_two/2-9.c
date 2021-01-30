/**
 * Author@ Cheng Feitian
 * Date: 2020-1-28
 * Description: 本题要求编写程序，计算2个正整数的和、差、积、商并输出。题目保证输入和输出全部在整型范围内。
 * Input Format: 输入在一行中给出2个正整数A和B
 * Output Format: 在4行中按照格式“A 运算符 B = 结果”顺序输出和、差、积、商。
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {

    int A = 0,B = 0;

    if(scanf("%d %d",&A,&B) != EOF){
        printf("%d + %d = %d\n",A ,B ,A + B);
        printf("%d - %d = %d\n",A ,B ,A - B);
        printf("%d * %d = %d\n",A ,B ,A * B);
        printf("%d / %d = %d\n",A ,B ,A / B);
    }

    return 0;
}

/**
 * Author@ Cheng Feitian
 * Date: 2020-1-27
 * Description: 给定一个华氏温度F，本题要求编写程序，计算对应的摄氏温度C。计算公式：C=5×(F−32)/9。题目保证输入与输出均在整型范围内。
 * Input Format: 150
 * Output Format: Celsius = 65
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {

    int fahr = 0, celsius = 0;
    
    if(scanf("%d",&fahr) != EOF){    
        celsius = 5 * (fahr - 32) / 9;
        printf("Celsius = %d",celsius);
    }

    return 0;
}

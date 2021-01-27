/**
 * Author@ Cheng Feitian
 * Date: 2020-1-27
 * Description: 本题要求编写程序，计算华氏温度150°F对应的摄氏温度。计算公式：C=5×(F−32)/9，
 * 式中：C表示摄氏温度，F表示华氏温度，输出数据要求为整型。
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {

    int fahr = 150, celsius = 0;
    
    celsius = 5 * (fahr - 32)/9;
    printf("fahr = 150, celsius = %d",celsius);

    return 0;
}

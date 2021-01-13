/**
 * Author@ Cheng Feitian
 * Date: 2020-1-13
 * Description: 使用转移序列
 */

#include <stdio.h>
#include <string.h>

#define maxn = 1024;

int main(void) {

    float salary;

    printf("\aEnter your desired monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f",&salary);

    printf("\n\t$%.2f a month is $%.2f a year.",salary ,salary * 12.0);
    printf("\rGee!\n");

    return 0;
}

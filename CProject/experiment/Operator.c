/**
 * Author@ Cheng Feitian
 * Date: 2020-1-13
 * Description: 运算符运算问题
 */

#include <stdio.h>
#include <string.h>

#define maxn = 1024;

int main(void) {

    int x = 5;
    int temp = (++x)+(++x)+(++x);
    printf("%d %d",temp ,x);

    return 0;
}

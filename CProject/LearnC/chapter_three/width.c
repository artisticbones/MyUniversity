/**
 * Author@ Cheng Feitian
 * Date: 2020-1-17
 * Description: 字段宽度
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {

    printf("*%d*\n",MAXSIZE);
    printf("*%2d*\n",MAXSIZE);
    printf("*%10d*\n",MAXSIZE);
    printf("*%-10d*\n",MAXSIZE);

    return 0;
}

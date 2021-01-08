/**
 * Author@ Cheng Feitian
 * Date: 2021-1-8
 * Description: fathm_ft.c -- 把2音寻转化成英寸
 */

#include <stdio.h>

#define maxn = 1024;

int main(void) {

    int feet,fathoms;
    
    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n",feet, fathoms);
    printf("Yes,I said %d feet!\n", 6 * fathoms);

    return 0;
}

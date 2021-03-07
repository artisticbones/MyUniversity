/**
 * Author@ Cheng Feitian
 * Date: 2020-3-5
 * Description: 看编译的内容
 * Input Format: None
 * Output Format: None
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//#define PI 3.14159
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void) {
    /* 主逻辑 */
    //printf("%f",2 * PI + 3.0);
    char s[5];
    strcpy(s,"abcd");
    int i = 0;
    putchar(TOUPPER(s[++i]));
    return 0;
}

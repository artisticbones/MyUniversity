/**
 * Author@Cheng Feitian
 * Date: 2020-3-4
 * Function:  写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ReverseString(char* str){

    int strLength = strlen(str);

    for (int i = strLength - 1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    
}

int main(){

    char *str;

    str = (char* )malloc(sizeof(char) * 1000);

    while (gets(str) != NULL)
    {
        ReverseString(str);
    }
    
    return 0;
}
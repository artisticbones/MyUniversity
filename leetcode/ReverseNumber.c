/**
 * Author@Cheng Feitian
 * Date: 2020-3-4
 * Function:  输入一个整数，将这个整数以字符串的形式逆序输出程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReverseNumber(int number){
    
    char str[1024];
    int strLength = 0;

    if(itoa(number,str,10) != NULL){
        strLength = strlen(str);
        for (int i = strLength - 1; i >= 0; i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }

}

int main(){

    int number = 0;

    while (scanf("%d",&number) != EOF)
    {
        ReverseNumber(number);
    }
    
    return 0;
}
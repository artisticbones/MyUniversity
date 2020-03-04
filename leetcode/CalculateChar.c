/**
 * Author@Cheng Feitian
 * Date: 2020-3-4
 * Function: 编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CalculateChar(char* str){

    int number = 0;
    int t[128] = {0};
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] == '\n')
        {
            break;
        }
        else
        {
            int range = str[i] - 127;

            if (~range >= 0 && ~range <= 127)
            {
                t[~range] = 1;
            }
        }      
    }

    for (int j = 0; j < 128; j++)
    {
        if (t[j] == 1)
        {
            number++;
        }
        
    }
    
    return number;
}

int main(){

    char *str;
    int length = 1024;
    int sum = 0;
    str = (char*)malloc(sizeof(char) * length);
    while (gets(str) != NULL)
    {
        sum = CalculateChar(str);
        printf("%d",sum);
    }   

    return 0;
}
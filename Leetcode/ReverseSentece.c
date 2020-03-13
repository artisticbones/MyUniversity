/**
 * Author@Cheng Feitian
 * Date: 2020-3-4
 * Function: 将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”所有单词之间用一个空格隔开，
 * 语句中除了英文字母外，不再包含其他字符
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReverseSentence(char *str){
    
    int sentenceLength = strlen(str);
    int flag = 0;

    char *strout = (char* )malloc(sizeof(char) * sentenceLength);

    for (int i = sentenceLength - 1; i >= 0; i--)
    {
        if (str[i] != ' ')
        {
            strout[flag] = str[i];
            flag++;
            if (i == 0)
            {
                for (int j = flag - 1; j >= 0; j--)
                {
                    printf("%c",strout[j]);
                }
                printf("\n");
                flag = 0;
            }
        }
        else
        {
            for (int j = flag - 1; j >= 0; j--)
            {
                printf("%c",strout[j]);
            }
            printf(" ");
            flag = 0;    
        }
        
    }
    
}

int main(){

    char *str;

    str = (char* )malloc(sizeof(char) * 1024);

    while (gets(str) != NULL)
    {
        ReverseSentence(str);
    }
    
    return 0;
}
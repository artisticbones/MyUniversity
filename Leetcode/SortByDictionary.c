/**
 * Author@Cheng Feitian
 * Date: 2020-3-5
 * Function:  给定n个字符串，请对n个字符串按照字典序排列。
 */

#include <stdio.h>
#include <string.h>

#define N 512

void SortByDictionary(char Array[N][N],int length){

    char temp[512];

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i -1; j++)
        {
            if (strcmp(Array[j],Array[j + 1]) > 0)
            {
                strcpy(temp,Array[j + 1]);
                strcpy(Array[j + 1],Array[j]);
                strcpy(Array[j],temp);
            }
            
        }
        
    }
    for (int i = 0; i < length; i++)
    {
        printf("%s\n",Array[i]);
    }
    
    
}

int main(){

    int length;
    while (scanf("%d",&length) != EOF)
    {
        char Array[length][512];

        for (int i = 0; i < length; i++)
        {
            scanf("%s",Array[i]);
        }

        SortByDictionary(Array,length);
    }
    
    return 0;
}
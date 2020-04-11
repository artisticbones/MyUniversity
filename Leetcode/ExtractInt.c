#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

int main(){

    int j = 0,flag;
    char strin[1024];
    char strout[1024];
    int t[10] = {0};

    while (gets(strin) != NULL)
    {
        for (int i = strlen(strin) - 1; i >= 0; i--)
        {
            if (t[strin[i] - 48] == 1)
            {
            }
            else
            {
                strout[j] = strin[i];
                j++;
                t[strin[i] - 48] = 1;
            }
            
        }

        for (int i = 0; i < strlen(strout); i++)
        {
            printf("%c",strout[i]);
        }
        printf("\n");
        
    }
    
    return 0;
}
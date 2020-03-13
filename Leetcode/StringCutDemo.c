#include <stdio.h>
#include <string.h>

int main(){
    int N = 2;
    char a[100];

    for (int i = 0; i < N; i++)
    {
        if(gets(a) != NULL){
            int length = strlen(a);
            int time = length / 8;
            int need = length % 8;
            if (length == 8)
            {
                for (int j = 0; j < 8; j++)
                {
                    printf("%c",a[i]);
                }
                printf("\n");
            }
            else if (length <= 8)
            {
                for (int i = 0; i < length; i++)
                {
                    printf("%c",a[i]);
                }
                for (int i = 0; i < 8 - length; i++)
                {
                    printf("0");
                }
                printf("\n");
            }
            else
            {
                for (int i = 0; i < time*8; i++)
                {
                    if ((i + 1) % 8 == 0)
                    {
                        printf("%c\n",a[i]);
                    }
                    else
                    {
                        printf("%c",a[i]);
                    }
                        
                }
                for (int j = 0; j < need; j++)
                {
                    printf("%c",a[time*8 + j]);
                }
                for (int j = 0; j < 8 - need; j++)
                {
                    printf("0");
                }
                printf("\n");
            }
            
        }
    }
    
    
    return 0;
}
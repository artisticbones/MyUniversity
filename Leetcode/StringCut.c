#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len, need;
    while (gets(str))
    {
        len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if ((i + 1) % 8 == 0)
            {
                printf("%c\n", str[i]);
            } 
            else
            {
                printf("%c", str[i]);
            }
        }
        if (len % 8 != 0)
        {
            need = 8 - len % 8;
            for (int i = 0; i < need; i++)
            {
                printf("0");
            }
            printf("\n");
        }
    }
    return 0;
}

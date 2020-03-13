#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    char strin[50];
    char strout[100];

    while (gets(strin))
    {
        int length = strlen(strin);
        int sum = 0;
        for (int i = length - 1; i >= 0; i--)
        {
            if (strin[i] >= '0' && strin[i] <= '9')
            {
                sum = sum + (strin[i] - 48)*pow(16,length - i - 1);
            }
            else if (strin[i] >= 'A' && strin[i] <= 'F')
            {
                sum = sum + (strin[i] - 55)*pow(16,length - i - 1);
            }
            
        }
        printf("%d\n",sum);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    int i=0,N=0;
    char s[5000];
    while (scanf("%c",&s[i])!=EOF)
    {
        /* code */
        if (s[i] == ' ')
        {
            /* code */
            N = 0;
        }
        else
        {
            /* code */
            N++;
        }
        if (i < 4999)
        {
            /* code */
            i++;
        }
    }
    if (N!=0)
    {
        N=N-1;
    }
    printf("%d",N);
    return 0;
}
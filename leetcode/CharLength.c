#include <stdio.h>
#include <string.h>

int main(){
    int i=0,N=0;
    char s[5000];
    while (scanf("%c",&s[i]) != EOF)
    {
        if (s[i] == ' ')
        {
            N = 0;
        }
        else
        {
            N++;
        }
        if (i < 4999)
        {
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
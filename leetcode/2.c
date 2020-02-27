#include <stdio.h>
#include <string.h>

int main(){
    
    char str[5000];
    if(gets(str) == NULL){
        return 0;
    }
    char s = getchar();
    int i,N=0;
    int change=0;
    int length = strlen(str);
    if (s >= 'a' && s <= 'z')
    {
        change = -32;
    }
    else if (s >= 'A' && s <= "Z")
    {
        change = 32;
    }
    
    for ( i = 0; i < length; i++)
    {
        if (s == str[i] || str[i] == s + change)
        {
            N++;
        }
        
    }
    printf("%d",N);
    
    return 0;
}

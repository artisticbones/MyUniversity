#include <stdio.h>

int main(){
    int i;
    while (scanf("%d",&i) != EOF)
    {
        int temp = (i % 10 >= 5);
        printf("%d\n",temp);
    }
    
    return 0;
}
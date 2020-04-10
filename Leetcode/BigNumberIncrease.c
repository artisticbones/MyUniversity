#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int number = 100000000;
    char *a,*b;
    int sum = 0;
    
    a = (char*)malloc(sizeof(char) * 1024);
    b = (char*)malloc(sizeof(char) * 1024);
    
    while((scanf("%s %s",a,b)) != EOF){
        if(atoi(a) >= ~number && atoi(b) <= number){
            sum = atoi(a) + atoi(b);
            printf("%d\n",sum);
        }
    }
    return 0;
}
#include <stdio.h>

void IsPrime(long number){

    int m = 1;

    for (int i = 2; i <= number; i++)
    {
        while(!(number % i))
        {
            printf("%d ",i);
            number /= i;
        }
        
    }
    
}

int main(){

    long number;
    int j;
    scanf("%d",&number);
    IsPrime(number);
    return 0;
}
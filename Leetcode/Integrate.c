#include <stdio.h>
#include <math.h>

int main(){
    float number;
    float temp;
    int out = 0;
    
    while(scanf("%f",&number) != EOF){
        temp = floor(number);
        if (number - temp < 0.5)
        {
            out = temp;
            printf("%d\n",out);
        }
        else
        {
            out = temp + 1;
            printf("%d\n",out);
        }
    }
    return 0;
}
/** 
 * Author@Cheng Feitian
 * Date: 2020-3-6
 * Function: 输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数.
 */

#include <stdio.h>

int CalculateOneInRAM(int number){
    int sum = 0;

    while (number != 0)
    {
        if(number % 2 == 1){
            sum++;
        }
        number /= 2;
    }
    
    return sum;
}

int main(){

    int number = 0;
    int sum = 0;

    while (scanf("%d",&number) != EOF)
    {
        sum = CalculateOneInRAM(number);
        printf("%d\n",sum);
    }
    
    return 0;
}
/**
 * Author@ Cheng Feitian
 * Date: 2020-1-28
 * Description: 本题目要求计算下列分段函数f(x)的值
 * Input Format: 输入在一行中给出实数x。
 * Output Format: 在一行中按“f(x) = result”的格式输出，其中x与result都保留两位小数。
 */

#include <stdio.h>
#include <math.h>

#define POWER 2

int main(void) {

    float x = 0,result = 0;
    
    if (scanf("%f",&x) != EOF)
    {
        if (x >= 0)
        {
            result = sqrt(x);
            printf("f(%.2f) = %.2f",x ,result);
        }else
        {
            result = pow(x + 1,POWER) + 2 * x + 1 / x;
            printf("f(%.2f) = %.2f",x ,result);
        }
        
    }

    return 0;
}

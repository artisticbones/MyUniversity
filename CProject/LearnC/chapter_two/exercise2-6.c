/**
 * Author@ Cheng Feitian
 * Date: 2020-2-5
 * Description: 求阶乘序列前N项和
 * Input Format: 输入在一行中给出一个不超过12的正整数N
 * Output Format: 在一行中输出整数结果
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int N;
    int sum = 0;
    
    /* 主逻辑 */
    if (scanf("%d",&N) != EOF)
    {
        if (N <= 12)
        {
            int x = 0;
            int factorial = 1;
            do
            {
                x++;
                for (int i = x; i >= 1; i--)
                {
                    factorial *= i;
                }
                sum += factorial;
                factorial = 1;
            } while (x < N);
            printf("%d",sum);
        }
        else{

        }
    }
    
    return 0;
}

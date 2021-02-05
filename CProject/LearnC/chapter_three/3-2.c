/**
 * Author@ Cheng Feitian
 * Date: 2020-2-5
 * Description: 计算符号函数的值
 * Input Format: 输入在一行中给出整数n
 * Output Format: 在一行中按照格式“sign(n) = 函数值”输出该整数n对应的函数值
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int n;
    /* 主逻辑 */
    int t;
    if (scanf("%d",&n) != EOF)
    {
        if (n < 0)
        {
            t = -1;
        }
        else if (n == 0)
        {
            t = 0;
        }
        else
        {
            t = 1;
        }
        printf("sign(%d) = %d",n,t);
    }
    
    return 0;
}

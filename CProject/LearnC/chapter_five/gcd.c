/**
 * Author@ Cheng Feitian
 * Date: 2020-2-4
 * Description: 辗转相除法秋最大公约数
 * Input Format: 
 * Output Format:
 * 如果b等于0，计算借书，a就是最大公约数
 * 否则，计算a除以b的余数，让a等于b，而b等于哪个余数
 * 回到第一步
 * 
 * a    b   t
 * 12   18  12
 * 12   6   0
 * 6    0 
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int a,b;
    int t = 0;
    /* 主逻辑 */

    if (scanf("%d %d",&a,&b))
    {
        while (b != 0)
        {
            t = a % b;
            a = b;
            b = t;
            printf("a=%d,b=%d,t=%d\n",a,b,t);
        }
        printf("gcd=%d\n",a);
    }
    
    return 0;
}

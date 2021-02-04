/**
 * Author@ Cheng Feitian
 * Date: 2020-2-4
 * Description: 整数分解(局限于正整数)
 * Input Format: Int
 * Output Format: Int
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int x = 0;
    int mask = 1;
    /* 主逻辑 */
    if (scanf("%d",&x))
    {
        int t = x;
        while (t > 9)
        {//判断整数有多少位
            t /= 10;
            mask *= 10;
        }
        printf("x=%d,mask=%d\n",x,mask);
        do
        {
            int d = x / mask;   // 分离的每一位
            printf("%d",d);
            if (mask > 9)
            {
                printf(" ");
            }
            x %= mask;          // 取剩下的余数
            mask /= 10;         // 位数同步减少
        } while (mask > 0);
        printf("\n");
    }
    

    return 0;
}

/**
 * Author@ Cheng Feitian
 * Date: 2020-2-23
 * Description: 输入数量不确定的[0,9]范围内的整数，统计每一种数字出现的次数，输入-1表示结束
 * Input Format: int
 * Output Format: int
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int count[10] = {0};
    int x = 0;
    scanf("%d",&x);
    /* 主逻辑 */
    while (x != -1)
    {
        if (x >= 0 && x <= 9)
        {
            count[x]++;
        }
        scanf("%d",&x);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d:%d\n",i,count[i]);
    }

    return 0;
}

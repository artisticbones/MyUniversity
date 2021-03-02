/**
 * Author@ Cheng Feitian
 * Date: 2021-3-2
 * Description: 输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数
 * Input Format:  输入一个整数（int类型）
 * Output Format: 这个数转换成2进制后，输出1的个数
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int num = 0;
    int cnt = 0;
    /* 主逻辑 */
    if (scanf("%d",&num) != EOF)
    {
        int t = num;
        while (t)
        {
            if ((t % 2))
            {
                cnt++;
            }
            t /= 2;
        }
        printf("%d\n",cnt);
    }
    return 0;
}

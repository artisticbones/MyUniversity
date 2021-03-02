/**
 * Author@ Cheng Feitian
 * Date: 2020-3-2
 * Description: 有这样一道智力题：
 * “某商店规定：三个空汽水瓶可以换一瓶汽水。
 * 小张手上有十个空汽水瓶，她最多可以换多少瓶汽水喝？”
 * 答案是5瓶，方法如下：
 * 先用9个空瓶子换3瓶汽水，喝掉3瓶满的，喝完以后4个空瓶子，用3个再换一瓶，喝掉这瓶满的，这时候剩2个空瓶子。
 * 然后你让老板先借给你一瓶汽水，喝掉这瓶满的，喝完以后用3个空瓶子换一瓶满的还给老板。
 * 如果小张手上有n个空汽水瓶，最多可以换多少瓶汽水喝？
 * Input Format: 输入文件最多包含10组测试数据，每个数据占一行，仅包含一个正整数n（1<=n<=100），表示小张手上的空汽水瓶数。
 * n=0表示输入结束，你的程序不应当处理这一行。
 * Output Format: 对于每组测试数据，输出一行，表示最多可以喝的汽水瓶数。如果一瓶也喝不到，输出0。
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int empty = 0,full = 0;
    /* 主逻辑 */
    while (scanf("%d",&empty) != EOF)
    {
        if (empty == 0)
        {
            break;
        }else if (empty >= 1 && empty <= 100)
        {
            while ((empty -= 3) >= -1)
            {
                empty ++;
                full ++;
            }
        }
        printf("%d\n",full);
        full = 0;
    }

    return 0;
}

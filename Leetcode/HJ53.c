/**
 * Author@ Cheng Feitian
 * Date: 2020-3-10
 * Description: 杨辉三角
 * Input Format: INT
 * Output Format: INT
 */

#include <stdio.h>

int doYanghui(int n);
int main(void) {
    /* 初始化 */
    int n = 0;
    int pos = -1;
    /* 主逻辑 */
    while (scanf("%d",&n) != EOF)
    {
        if(n <= 10000){
            pos = doYanghui(n);
        }
        printf("%d\n",pos);
    }

    return 0;
}

int doYanghui(int n){
    int pos = -1;
    if (n == 1 || n == 2)
    {
        pos = -1;
    }else{
        int result = ((n - 2) % 4);
        switch (result)
        {
        case 0:
            pos = 4;
            break;
        case 1:
        case 3:
            pos = 2;
            break;
        case 2:
            pos = 3;
            break;
        default:
            break;
        }
    }
    return pos;
}
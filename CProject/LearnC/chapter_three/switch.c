/**
 * Author@ Cheng Feitian
 * Date: 2020-1-30
 * Description: 关于分段函数是否能够使用 switch 的讨论
 * Input Format: None
 * Output Format: None
 */

#include <stdio.h>
#include <math.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int x = 0;

    if(scanf("%d",&x) != EOF){
        /**
         * 程序主逻辑
         * 
         */
        int f = x / abs(x);
        switch (f)
        {
        case -1:
            printf("-1");
            break;
        case 1:
            printf("%d",2 * x);
            break;
        default:
            printf("0");
            break;
        }
    }
    
    return 0;
}

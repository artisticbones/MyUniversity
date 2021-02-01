/**
 * Author@ Cheng Feitian
 * Date: 2020-2-1
 * Description: for循环测试
 * Input Format: 整型
 * Output Format: 整型
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int i;
    for(i = 0;i < 4;i++){
        printf("i = %d\n",i);
    }
    printf("最后i = %d\n",i);
    /**
     * 程序主逻辑
     * 
     */
    return 0;
}

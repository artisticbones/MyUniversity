/**
 * Author@ Cheng Feitian
 * Date: 2020-2-25
 * Description: 测试能分配多少空间
 * Input Format: None
 * Output Format: As is shown below。
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    void *p;
    int cnt = 0;
    /* 主逻辑 */
    while (p = malloc(100 * 1024 * 1024))
    {
        cnt++;
    }
    printf("There have %d00MB's spare space!\n",cnt);

    return 0;
}

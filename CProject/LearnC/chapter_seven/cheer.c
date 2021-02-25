/**
 * Author@ Cheng Feitian
 * Date: 2020-22
 * Description: 测试参数传递
 * Input Format: None
 * Output Format: None
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

void cheer(int number){
    printf("cheer %d\n",number);
}

int main(void) {
    /* 初始化 */
    cheer(2.0);
    /* 主逻辑 */
    cheer(2.4);
    return 0;
}

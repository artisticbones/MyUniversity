/**
 * Author@ Cheng Feitian
 * Date: 2020-1-27
 * Description: 一个物体从100米的高空自由落下。编写程序，求它在前3秒内下落的垂直距离。设重力加速度为10米/秒2。
 * 结果保留2位小数。
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {

    float height = 0;

    height = 10 * 3 * 3 / 2;

    printf("height = %.2f",height);


    return 0;
}

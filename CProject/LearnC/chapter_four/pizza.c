/**
 * Author@ Cheng Feitian
 * Date: 2020-1-19
 * Description: 在比萨饼程序中使用已定义的常量
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAXSIZE 1024
#define PI 3.14159

int main(void) {

    float area,circum,radius;
    printf("What is the radius of your pizza?\n");
    scanf("%f",&radius);

    area = PI * pow(radius,2);
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n",circum,area);

    return 0;
}

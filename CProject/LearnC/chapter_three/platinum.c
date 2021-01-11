/**
 * Author@ Cheng Feitian
 * Date: 2020-1-10
 * Description: your weight in platinum
 */

#include <stdio.h>

#define maxn = 1024;

int main(void) {

    float weight;       /* 你的体重 */

    float value;        /* 相等重量的白金价值 */

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    scanf("%f",&weight);

    value = 1700.0 * weight * 14.5833;

    /* 14.5833用于把英镑常衡蛊司 */
    printf("Your weight in platinum is worth $%.2f.\n",value);
    printf("you are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value .\n");

    return 0;
}
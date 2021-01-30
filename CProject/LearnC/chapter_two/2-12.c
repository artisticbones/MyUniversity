/**
 * Author@ Cheng Feitian
 * Date: 2020-1-29
 * Description: 输入2个正整数lower和upper（lower≤upper≤100），请输出一张取值范围为[lower，upper]、且每次增加2华氏度的华氏-摄氏温度转换表。
 * 温度转换的计算公式：C=5×(F−32)/9，其中：C表示摄氏温度，F表示华氏温度。
 * Input Format: 在一行中输入2个整数，分别表示lower和upper的值，中间用空格分开。
 * Output Format: 第一行输出："fahr celsius"
 * 接着每行输出一个华氏温度fahr（整型）与一个摄氏温度celsius（占据6个字符宽度，靠右对齐，保留1位小数）。
 * 若输入的范围不合法，则输出"Invalid."。
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {

    int lower = 0,upper = 0;
    int fahr = 0;
    float celsius = 0;

    if (scanf("%d %d",&lower ,&upper) != EOF)
    {
        if (lower > upper || lower > 100 || upper > 100)
        {
            printf("Invalid.");
        }else{
            printf("fahr celsius\n");
            for (fahr = lower; fahr <= upper; fahr += 2)
            {
                celsius = 5 * (fahr - 32) / 9.0;
                printf("%d%6.1f\n",fahr,celsius);
            }
        }
        
    }

    return 0;
}

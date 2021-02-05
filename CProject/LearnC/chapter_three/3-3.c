/**
 * Author@ Cheng Feitian
 * Date: 2020-2-5
 * Description: 统计学生平均成绩与及格人数
 * Input Format: 输入在第一行中给出非负整数N，即学生人数。第二行给出N个非负整数，即这N位学生的成绩，其间以空格分隔
 * Output Format: 按照以下格式输出：
 * average = 成绩均值
 * count = 及格人数
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int N = 0;
    /* 主逻辑 */
    if (scanf("%d",&N) != EOF)
    {
        int a[N];
        for (int i = 0; i < N; i++)
        {
            if(scanf("%d",&a[i]) != EOF);
        }
        float average = 0.0;
        int count = 0;
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += a[i];
            average = 1.0 * sum / N;
            if (a[i] >= 60)
            {
                count++;
            }
            else{

            }
        }
        printf("average = %.1f\n",average);
        printf("count = %d\n",count);
    }

    return 0;
}

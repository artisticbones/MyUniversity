/**
 * Author@ Cheng Feitian
 * Date: 2020-3-2
 * Description: 有一只兔子，从出生后第3个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子，
 * 假如兔子都不死，问每个月的兔子总数为多少？
 * Input Format: 输入int型表示month 
 * Output Format: 输出兔子总数int型
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// #define INTERVAL 3

// int Calculation(int month);

// int main(void) {
//     /* 初始化 */
//     int month = 0;
//     int sum = 0;
//     /* 主逻辑 */
//     while (scanf("%d",&month) != EOF)
//     {
//         sum = Calculation(month);
//         printf("%d\n",sum);
//     }

//     return 0;
// }

// int Calculation(int month){
//     int result = 0;
//     if (month == 1 || month == 2)
//     {
//         result = 1;
//     }else{
//         result = Calculation(month - 1) + Calculation(month - 2);
//     }
    
//     return result;
// }


int main()
{
    int month;
    while(scanf("%d",&month))
    {
        int shu3 = 0;//成熟了的可以生兔子的兔子数量，即成熟度是3及以上的
        int shu1 = 1;//新生的成熟度为1的兔子数量
        int shu2 = 0;//差一个月就成熟的成熟度为2的兔子数量
        
        //这里一定是--month
        //因为初始三个值已经是第一个月的数了，所以循环少一个月
        while(--month)
        {
            shu3 += shu2;//之前熟了的兔子加上两个月熟的兔子就是所有熟兔子
            shu2 = shu1;//两个月的成熟度的兔子都是新生兔子变的
            shu1 = shu3;//新生兔子都是成熟了的兔子生的
        }
        printf("%d\n",shu1 + shu2 + shu3);
    }
    return 0;
}
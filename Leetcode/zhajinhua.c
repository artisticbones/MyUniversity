/**
 * Author: Cheng Feitian
 * Date: 2020-3-19
 * Function:一种取值范围在1-10^9以内的简单牌，两个人一开始各自有n张牌，他们会想办法组合出最大的牌，
 * 请你计算出获胜的一方的三张牌的点数之和。
 */

#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a:b;
}

int main()
{
    int N = 0;
    int a[20000] = {0};
    int b[20000] = {0};
    int flag = 0;
    int time = 3;
    int aSum = 0;
    int bSum = 0;
    while (scanf("%d",&N) != EOF)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&flag);
            a[flag] = 1;
        }

        for (int j = 0; j < N; j++)
        {
            scanf("%d",&flag);
            b[flag] = 1;
        }

        for (int k = 19999; k >= 0; k--)
        {
            if (a[k] != 0)
            {
                aSum += k;
                time--;
                if (time == 0)
                {
                    break;
                }
                
            }
            
        }

        time = 3;
        for (int l = 19999; l >= 0; l--)
        {
            if (b[l] != 0)
            {
                bSum += l;
                time--;
                if (time == 0)
                {
                    break;
                }
                
            }
            
        }
        
        printf("%d\n",max(aSum,bSum));
        
        
    }
    
    return 0;
}
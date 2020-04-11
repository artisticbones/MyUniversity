/**
 * Author: Cheng Feitian
 * Date: 2020-3-19
 * Function: 求出最大的得分
 */

#include <stdio.h>
#include <string.h>

typedef struct Score
{
    int goal;   //任务得分
    int extra;  //额外得分
}Score;

int main(){
    int totalTask = 0;
    int totalTime = 0;
    int sNumber = 0;
    int sumTime = 0;
    int sumScore = 0;

    int goal[100] = {0};

    Score score;

    scanf("%d %d %d",&totalTask,&sNumber,&totalTime);

    scanf("%d %d",&score.goal,&score.extra);

    for (int i = 0; i < sNumber; i++)
    {
        scanf("%d",&goal[i]);
    }

    for (int i = 0; i < totalTask; i++)
    {
        for (int j = 0; j < sNumber; j++)
        {
            if ((goal[j] > totalTime) && (goal[j] > totalTime - sumTime))
            { 
                if (sumTime <= totalTime)
                {
                    sumTime += goal[j];
                    sumScore += score.goal;
                }
                else if (j == sNumber)
                {
                    sumScore += score.extra;
                }
            }
                
        }
    }
    
    printf("%d",sumScore);
    

    return 0;
}
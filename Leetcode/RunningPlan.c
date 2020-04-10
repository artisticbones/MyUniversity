/**
 * 问题类型：该题为最短路径问题
 * 算法思想：首先构造图，将值输入好，之后可以按照迪杰斯特拉算法求解最短路径，即在该点使用类似于贪心算法找到该点所连接最短边（不超过所设值），
 * 遍历图中每个点，即可得到能够到达的目的地个数
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct RunningPlan
{
    /* data */
};


int Prim(int n,int m,int s){

    int sum = 0;


    return sum;
}

int main(){

    int n,m,s;
    int sum;

    while (scanf("%d %d %d",&n,&m,&s) != EOF)
    {
        sum = Prim(n,m,s);
        printf("%d\n",sum);
    }
    
    return 0;
}
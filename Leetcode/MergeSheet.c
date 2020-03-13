#include <stdio.h>

void MergeSheet(int time){
    int a[1024]={0};
    int t[1024]={0};
    int index,number;
    int sum = 0;

    for (int i = 0; i < time; i++)
    {
        scanf("%d %d",&index,&number);
//        sum = number;
        if (t[index] == 1)
        {
            sum = a[index];
            sum = sum + number;
            a[index] = sum;
        }
        else
        {
            sum = number;
            a[index] = sum;
            t[index] = 1;
        }
    }

    for (int j = 0; j < 1024; j++)
    {
        if (a[j] != 0)
        {
            printf("%d %d\n",j,a[j]);
        }
        
    }
    
    
}

int main(){

    int time = 0;

    while (scanf("%d",&time) != EOF)
    {
        MergeSheet(time);
    }

    return 0;
    
}
/**
 * Author@ Cheng Feitian
 * Date: 2020-7-11
 * Function：给定一个整数数组 nums，按要求返回一个新数组counts。数组counts有该性质：
 * counts[i] 的值是 nums[i] 右侧小于 nums[i] 的元素的数量
 */

#include <stdio.h>

static int len = 4;

void calculateNum(int *input,int *output,int len){
    //method 1: 暴力破解法
    for (int i = 0; i < len; i++)
    {
        int count = 0;
        for (int j = len - 1; j >= i; j--)
        {
            if(input[i] > input[j]){
                count++;
            }
            else
            {
                output[i] = count;
            }
        }
    }
    //method 2: 标志数组法
    // 1. 第一步根据输入数组对应数组及差值
    // 2. 第二部根据标志数组的值及位置得出结果数组
    
}

int main(){

    int input[len],output[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&input[i]);
        output[i] = 0;
    }

    calculateNum(input,output,len);

    for (int i = 0; i < len; i++)
    {
        printf("%d\t",input[i]);
        printf("%d\n",output[i]);
    }
        
    return 0;
}
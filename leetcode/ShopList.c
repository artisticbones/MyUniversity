/**
 * Author@Cheng Feitian
 * Date: 2020-3-6
 * Function: 购物单。
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Goods
{
    int price;  //价格
    int rank;   //重要等级
    struct Goods *flag;   //是否主附件
}Goods,*Good;

typedef struct ShopList
{
    int total;  //总钱数
    int goodsNum;   //总物品数
}ShopList,*ShopL;

int max(int m, int n)
{
    return m > n ? m:n;
}

int Calculation(ShopL shopList,Good goods){


    int sum = 0;

    for (int i = 0; i < shopList->goodsNum; i++)
    {
        
        for (int j = shopList->goodsNum - 1; j >= 0; j--)
        {
            if (goods->price + goods->flag->price <= shopList->total)
            {
                int temp = goods->price * goods->rank + goods->flag->price * goods->flag->rank;
                sum = max(temp,sum);
            }
            else
            {
                /* code */
            }
                    
        }
            
    }

    return sum;
}

int main(){

    int sum = 0;
    ShopL shopList = (ShopList*)malloc(sizeof(ShopList) * 60);
    // ShopL shopList;
    Goods *goods = (Goods*)malloc(sizeof(Goods) * 60);
    while (scanf("%d %d",&shopList->total,&shopList->goodsNum) != EOF) 
    {
        for (int i = 0; i < shopList->goodsNum; i++)
        {
            scanf("%d %d %d",&goods->price,&goods->rank,&goods->flag);
        }
        sum = Calculation(shopList,goods);

        printf("%d",sum);
    }
    
    free(goods);
    free(shopList);
    return 0;
}
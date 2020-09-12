/**
 * Author@ Cheng Feitian
 * Date: 2020-9-12
 * Function：实现线性表的顺序表形式；
 */

#include <iostream>
#define MaxSize 50

typedef int ElemType;

typedef struct SequenceTable
{
    ElemType data[MaxSize];
    int length;
}SqList;

using namespace std;

bool ListInsert(SqList &L, int i, ElemType e){
    if (i < 1 || i > L.length + 1){     //判断插入位置是否合法
        return false;
    }
    if (L.length >= MaxSize)    // 当前存储空间已满，不能插入
    {
        return false;
    }
    for (int j = L.length; j >= i; j--)
    {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

int main(int args, char **argv)
{
    SqList L;
    int condition;
    for (int i = 0; i < L.length; i++)
    {
        L.data[i] = i;
    }
    do{
        cout << "Please choose the function:";
        cin >> condition;
        if (condition == 1)
        {
            int location = 0;
            ElemType e;
            cout << "Please input location and elem:";
            cin >> location;
            cin >> e;
            ListInsert(L,location,e);
           
        }
        else if (condition == 2)
        {
            
        }
        
    }while (condition != 9999);
    
    
    return 0;
}
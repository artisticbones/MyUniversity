/**
 * Author@ Cheng Feitian
 * Date: 2020-11-05
 * Description:Initialize Single List 
 */

#include <algorithm>
#include <iostream>

typedef int Elemtype;

typedef struct LNode
{
   Elemtype data;           // 数据域
   struct LNode *next;      //指针域
}LNode,*LinkList;

using namespace std;
const int maxn = 1005;

LinkList List_HeadInsert(LinkList &L){          //头插法，逆向建立单链表
    LNode *s;
    int x = 0;

    L = (LinkList)malloc(sizeof(LNode));        //创建头节点
    L->next = NULL;                             //初始化为空表
    cout << "Please input the number you need insert:";
    cin >> x;
    while (x != 9999)
    {
        s = (LNode*)malloc(sizeof(LNode)); 
        s->data = x;
        s->next = L->next;
        L->next = s;
        cout << "Please input the number you need insert:";
        cin >> x;  
    }
    return L;
}

LinkList List_TailInsert(LinkList &L){
    int x = 0;
    L = (LinkList)malloc(sizeof(LNode));    //创建头节点

    LNode *s,*r=L;                          //r为表尾指针
    L->next = NULL;                         //初始化为空表
    cout << "Please input the number you need insert:";
    cin >> x;

    while (x != 9999)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        cout << "Please input the number you need insert:";
        cin >> x;
    }
    r->next = NULL;                     //尾结点指针置空
    return L;
}

LNode *GetElem(LinkList L,int i){
    int j = 1;                          //计数，初始值为1
    LNode *p = L->next;                 //头结点指针赋给p
    if (i == 0)
    {
        return L;                       //若i等于0，则返回头结点
    }
    if (i < 1)
    {
        return NULL;                    //若i无效，则返回NULL
    }
    while (p && j < i)                  //从第1个节点开始找，查找第i个节点
    {
       p = p->next;
       j++; 
    }
    
    return p;                           //返回第i个节点的指针，若i大于表长则返回NULL
}

LNode *LocateElem(LinkList L,Elemtype e){
    LNode *p = L->next;         //将头结点复制给p
    while (p != NULL && p->data != e)
    {
       p = p->next; 
    }
    
    return p;
}

LinkList LNodeInsert(LinkList &L,int i,Elemtype e)
{
    LNode *p,*s;
    p = GetElem(L,i - 1);
    s = (LNode*)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;

    /* 前插法 */
    // s->next = p->next;
    // p->next = s;
    // temp = p->data;
    // p->data = s->data;
    // s->data = temp;

    return L;
}

LinkList LNodeDelete(LinkList &L,int i)
{
    LNode *p,*q;
    p = GetElem(L,i - 1);               //查找删除位置的前驱节点
    q = p->next;                        //令q指向被删除节点
    p->next = q->next;                  //将*q节点从链中断开
    free(q);                            //释放节点存储空间
    
    /* 删除节点*p的操作可用删除*p的后继节点操作来实现，实质就是将其后继节点的值赋予其自身，然后删除后继节点，并将时间复杂度变为O(1) */
    // q = p->next;                        //令q指向*p的后继节点
    // p->data = p->next->data;            //和后继节点交换数据域
    // p->next = q->next;                  //将*q节点从链中断开
    // free(q);
    return L;
}

int GetListLength(LinkList L)
{
    LNode *p;
    int count = 0;

    p = L->next;

    while (p->next != NULL)
    {
       count++; 
    }
    return count;
}

int main() {
#ifdef LOCAL
    freopen("./result/1.in", "r", stdin);
    freopen("./result/1.out", "w", stdout);
#endif
    LinkList L;
    int condition;
    
    do{
        cout << "Please choose the function:";
        cin >> condition;
        if (condition == 1)
        {
            if(List_HeadInsert(L)){
                cout << "Success!" << endl;
            }
            else
            {
                cout << "Insert false!" << endl;
            }
            
           
        }
        else if (condition == 2)
        {
            int location = 0;
            cout << "Please input location:" << endl;
            cin >> location;
            LNodeDelete(L,location);
           
        }
        else if (condition == 3)
        {
            Elemtype e;
            cout << "Please input the value you want to locate:";
            cin >> e;
            cout << "The Location is: " << LocateElem(L,e) << endl;
        }
        else if (condition == 5)
        {
            for (LNode *p = L->next;p->next != NULL; p = p->next)
            {
                cout << p->data << "\t";
            }
            
            cout << endl;               
        }
        
    }while (condition != 10000);

    return 0;
}

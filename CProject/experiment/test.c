#include<stdio.h>
#include<stdlib.h> 
typedef struct Linknode
{
	int data;
	struct Linknode *next;
}Linknode;

void CreatLinkList(int a[],Linknode *head,int n)
{// 没问题
	Linknode *q = head;
	int i;
	for(i=0;i<n;i++)
	{
		Linknode *p = (Linknode*)malloc(sizeof(Linknode));
		p->data = a[i];
		q->next = p;
		q = p;
	}
	q->next = NULL; 
}
void print(Linknode *head)
{
	Linknode *p = head->next;
	while(p != NULL)
	{
        printf("%d ",p->data);
		p = p->next;
    }
 
}
void Sort(Linknode *head)
{
	int temp;
	Linknode *p,*q,*min;
	p = head->next;
	q = p->next;
	while(p->next!=NULL)
	{	
		min = p;    //第一次 min 指向为 head
		while(q!=NULL)
		{
			if(q->data <= min->data)
			{
				min = q;
			}
			q = q->next;
		}
		temp = min->data;
		min->data = p->data;
		p->data = temp;
		p=p->next;
		q=p->next;
	}
}
void main()
{
	int a[10] = {12,33,2,5,9,88,16,13,26,10};
	Linknode *head = (Linknode*)malloc(sizeof(Linknode));
	CreatLinkList(a,head,10);
	Sort(head);
	print(head);
}
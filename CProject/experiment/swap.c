#include<stdio.h>
void swap2(int *ptr1,int *ptr2);
void main()
{
    int a=10, b=8;
    swap2(&a,&b);
    printf("a=%d , b=%d" ,a,b);
}
void swap1(int *c,int *d)
{
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
}
void swap2(int *c,int *d){
    int *temp = NULL;
    int *p = 1;
    printf("p = %d",p);
    temp = c ;
    c= d;
    d = temp;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int test_student(int *a,int n)
{
    int t[1024]={0};
    int i;
    for (i=0;i<n;i++){
        t[a[i]] = 1;
    }
    for (i=0;i<1024;i++){
        if(t[i])
        printf("%d\n",i);
    }
    return 0;
 
}
 
int main(int argc, char const *argv[])
{
    int i,n;
    while(~scanf("%d",&n)&&n>0){
 
        int *a=malloc(sizeof(int) * n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        test_student(a,n);
        free(a);
    }
    return 0;
}
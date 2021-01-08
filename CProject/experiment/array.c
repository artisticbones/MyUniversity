#include <stdio.h>

int main(void){

    int a[2][2];
    int **ptr = a;

    printf("a 的存储内容：%d\n",a);
    printf("a 的大小：%d\n",sizeof(a));
    printf("二级指针ptr的存储内容：%d\n",ptr);
    printf("Array a[0] 的存储内容：%d\n",a[0]);
    printf("Array a[1] 的存储内容：%d\n",a[1]);
     

    return 0;
}
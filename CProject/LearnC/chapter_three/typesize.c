/**
 * Author@ Cheng Feitian
 * Date: 2020-1-15
 * Description: 打印类型大小
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE = 1024

int main(void) {

    printf("Type int has a size of %u bytes.\n",sizeof(int));
    printf("Type char has a size of %u bytes.\n",sizeof(char));
    printf("Type float has a size of %u bytes.\n",sizeof(float)); 
    printf("Type double has a size of %u bytes.\n",sizeof(double));
    
    printf("Type long int has a size of %u bytes.\n",sizeof(long int));
    printf("Type long double has a size of %u bytes.\n",sizeof(long double));

    return 0;
}

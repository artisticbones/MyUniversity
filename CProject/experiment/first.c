#include <stdio.h>

int main(){
    char *str;
    __asm(
        "call @@1           \n\
        db 'mystr', 0       \n\
        @@1:                \n\
        pop eax             \n\
        mov str,eax"
    );
    printf("%s",str);
    return 0;
}
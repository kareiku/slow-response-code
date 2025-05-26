#include <stdio.h>

#define N 20

typedef struct
{
    unsigned int womp : N;
}BYTE;

int main() {
    BYTE *a;
    a->womp = 10;
    printf("%o", a->womp);

    return 0;
}    

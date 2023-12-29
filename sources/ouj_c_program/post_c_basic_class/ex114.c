#include <stdio.h>

int main(void) {
    int a = 12, b = 10;

    printf("a      = %d\n", a);
    printf("b      = %d\n", b);

    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);

    printf("~a     = %d\n", ~a);

    printf("a << 3 = %d\n", a << 3);
    printf("a >> 2 = %d\n", a >> 2);

    return 0;
}
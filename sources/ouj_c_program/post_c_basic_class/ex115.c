#include <stdio.h>

int main(void)
{
    int num, x;

    printf("num > ");
    scanf("%d", &num);

    printf("posision >");    
    scanf("%d", &x);

    printf("num の下位から %d ビット目の値は %d です。\n", x, num & 1 << (x - 1) & 1);

    return 0;

}


#include <stdio.h>

int main (void) {
    int i;

    i = 1;

    while (i <= 5){
        printf("%d", i);
        ++i;
    }
    printf("\n");

    return 0;
}
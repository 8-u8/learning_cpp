#include <stdio.h>

int main (void) {
    int n, i, j;

    printf("正の整数を入力してください > ");
    scanf("%d", &n);
    
    i = 1;
    j = n;

    while (i <= n){
        printf("%d", j);
        --j;
        ++i;
    }
    printf("\n");

    return 0;
}
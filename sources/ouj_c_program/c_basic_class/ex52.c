#include <stdio.h>

int plus(int a, int b){
    int c;

    c = a + b;

    return c;

}

int main(void){
    int n1, n2;

    printf("整数 n1 の値>");
    scanf("%d", &n1);

    printf("整数 n2 の値>");
    scanf("%d", &n2);

    printf("n1 + n2 = %d\n", plus(n1, n2));

    return 0;

}
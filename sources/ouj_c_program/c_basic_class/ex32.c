#include <stdio.h>

int main(void) {
    
    int max;
    int min;

    int a, b, c;

    printf("input as a >");
    scanf("%d", &a);

    printf("input as b >");
    scanf("%d", &b);
    
    printf("input as c >");
    scanf("%d", &c);
    
    max = a;
    min = a;

    // 最大値を求める
    if (b > max) {
        int tmp;
        tmp = max;
        max = b;
        b = tmp;
    }

    if (c > max) {
        int tmp;
        tmp = max;
        max = c;
        c = tmp;
    }

    // 最小値を求める
    if (b < min) {
        int tmp;
        tmp = min;
        min = b;
        b = tmp;
    }

    if (c < min) {
        int tmp;
        tmp = min;
        min = c;
        c = tmp;
    }



    printf("最大値: %d \n", max);
    printf("最小値: %d \n", min);

    return 0;
}
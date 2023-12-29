#include <stdio.h>
// int型の値を3つ受け取り、その中央値をint型で返す関数
int median(int a, int b, int c){
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c) {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if (b > c) {
        int tmp = b;
        b = c;
        c = tmp;
    }
    return b;
}

int main(){
    int a, b, c;
 
    printf("整数を3つ入力してください。\n");
    printf("1つ目 > ");
    scanf("%d", &a);
    printf("2つ目 > ");
    scanf("%d", &b);
    printf("3つ目 > ");
    scanf("%d", &c);
    
    printf("中央値は %d です。\n", median(a, b, c));
    
    return 0;
}
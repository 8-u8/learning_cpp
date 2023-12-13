#include <stdio.h>

int is_prime(int n){
    int m;
    int o;
    int i;
    // 1~(n-1)で割り算をする
    i = 2;

    while(i < n){
        m = n % i;
        // printf("%d ", m);
        if(m == 0){
            o = 0;
            break;
        }else{
            o = 1;
        }
        i++;
        
    }
    return o;
}

int main(void){
    int x;
    scanf("%d",&x);

    if(is_prime(x)==1){
        printf("%dは素数です", x);
    }else{
        printf("%dは素数ではありません", x);
    }

    return 0;
}
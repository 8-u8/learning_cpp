#include <stdio.h>

void func(int);

int main() {
    
    int n = 1;

    printf("(1) n = %d\n", n);

    func(n);

    printf("(4) n = %d\n", n);

    return 0;

}

void func(int a) {
    printf("(2) a = %d\n", a);

    a = 2;

    printf("(3) n = %d\n", a);

    return;
}
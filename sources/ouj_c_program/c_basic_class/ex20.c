#include <stdio.h>

int main (void){
    int number;

    printf ("正の整数を入力してください>");
    scanf("%d", &number);

    if (number % 5)
        printf ("%d は5で割り切れません \n", number);
    else
        printf ("%dは5で割り切れます。 \n", number);

    return 0;
}
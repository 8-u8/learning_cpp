#include <stdio.h>

int main(void)
{
    int number;

    printf("正の整数を入力してください>");
    scanf("%d", &number);

    if (number < 50)
        printf("%d は50未満です。 \n", number);
    else
        printf("%dは50以上です \n", number);

    return 0;
}
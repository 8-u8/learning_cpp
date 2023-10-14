#include <stdio.h>

int main (void)
{
    int age;

    printf("今何歳ですか？ >");
    scanf("%d", &age);

    /*5年後の年齢を表示する*/
    printf("5年後には%d歳です\n" , age + 5);

    return 0;
}
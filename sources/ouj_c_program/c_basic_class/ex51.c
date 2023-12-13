#include <ctype.h>
#include <stdio.h>

int main(void){
    char c;

    printf("enter the character>");
    scanf("%c", &c);

    printf("the capital letter of %c is %c", c, toupper(c));
    return 0;
}
#include <stdio.h>

int main(void) {
    int height;
    int age;

    printf("enter your height >");
    scanf("%d", &height);

    printf("enter your age >");
    scanf("%d", &age);

    // age is over 8th, or age is over 6th and height is over 120cm.
    if ((age >= 8) || (age >= 6 && height >= 120)) {
    
        printf("You can ride jet-coaster");
    
    }
    else {
        printf("You can not ride jet-coaster");
    }
}
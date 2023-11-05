#include <stdio.h>

int main(void) {
    int s;
    printf("enter your sroce >");
    scanf("%d", &s);
    if (s >= 90) {
        printf("your rank is S");
    }
    else if (80 <= s < 90) {
        printf("your rank is A");
    }
    else if (s < 80 & s >= 70) {
        printf("your rank is B");
    }
    else if (s < 70 & s >= 60) {
        printf("your rank is C");
    }
    else if (s < 60) {
        printf("your rank is D");
    }
}
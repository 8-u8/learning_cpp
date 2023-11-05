#include <stdio.h>

int main (void) {
    double price;
    int year;

    printf("price >");
    scanf("%lf", &price);

    printf("year > ");
    scanf("%d", &year);

    if (year <= 2019) {
        price *= 1.05;
    }
    else {
        price *= 1.1;
    }

    printf("price with tax is %0f", price);
}


#include <stdio.h>

int main (void) {
    double price;
    int year;

    printf("price >");
    scanf("%lf", &price);

    printf("year > ");
    scanf("%d", &year);


    price *= year <= 2019 ? 1.05 : 1.10;

    printf("price with tax is %0f", price);
}


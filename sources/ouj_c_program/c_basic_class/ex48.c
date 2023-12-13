#include <math.h>
#include <stdio.h>

int main(void) {
    double x;

    printf("enter the non negative number >");
    scanf("%lf", &x);

    printf("the square root of %f is %f", x, sqrt(x));

    return 0;
}
#include <math.h>
#include <stdio.h>

double expo(double a, int b){
    double c;

    c = pow(a, b);

    return c;
}

int main(void){
    double x;
    int y;

    scanf("%lf",&x);
    scanf("%d",&y);
    printf("%fの%d乗は%fです", x, y, expo(x,y));

    return 0;

}
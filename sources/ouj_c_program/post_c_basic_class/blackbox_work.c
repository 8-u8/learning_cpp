#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int count = 0;

    for (int i = 0; i < 10000; i++) {
        double x = (double)rand() / RAND_MAX * 3;
        double y = (double)rand() / RAND_MAX * 3;

        if (x >= 0 && y >= 0 && y <= (1.0/3.0) * x + 1 && y <= (1.0/3.0) * x * x) {
            count++;
        }
    }

    double area = 3.0 * count / 10000.0;
    printf("近似面積: %.5f\n", area);

    return 0;
}
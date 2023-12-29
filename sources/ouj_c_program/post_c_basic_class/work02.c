#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 領域内に点が入っていれば1を返す関数
int check_point(double x, double y)
{
    double f1, f2 ;
    f1 = (1.0 / 3.0 * x) + 1.0;
    f2 = (1.0 / 3.0) * pow(x, 2);

    if (y < f1 && y > f2)
    {
        return 1;
    }
    return 0;
}

// モンテカルロ法の実施
int main()
{
    int i, count = 0;
    double x, y;
    for (i = 0; i < 10000; i++)
    {
        // x in [0, 3], y in [0, 2]の乱数を生成
        x = (double)rand() / RAND_MAX * 3;
        y = (double)rand() / RAND_MAX * 2;

        // 領域内にあった点の個数をカウント
        if (check_point(x, y))
        {
            count++;
        }
    }
    // 3かける2の長方形の面積×領域内に落ちた点の割合
    double area =  (3 * 2) * count / 10000.0;
    printf("斜線部分の面積: %.5f\n", area);
    return 0;
}
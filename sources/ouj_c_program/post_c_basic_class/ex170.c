#include <stdio.h>
#include <string.h>

/*構造体*/
struct person {
    char name[10];
    int age;
    double height;
};

int main(void)
{
    struct person p1, p2;
    /* p1はYamadaさんのデータ */
    strcpy(p1.name, "Yamada");
    p1.age = 35;
    p1.height = 170.5;
    /* p2のデータはキーボードから入力 */
    printf("名前 > ");
    scanf("%s", p2.name);
    printf("年齢 > ");
    scanf("%d", &p2.age);
    printf("身長 > ");
    scanf("%lf", &p2.height);
    printf("\n");
    printf("%sさんの年齢は%d歳、身長は%.1fcmです。\n", p1.name, p1.age, p1.height);
    printf("%sさんの年齢は%d歳、身長は%.1fcmです。\n", p2.name, p2.age, p2.height);
    return 0;
}
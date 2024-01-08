#include <math.h>
#include <stdio.h>

int main(void){
    int price[5];
    int max_id;    /* 最高額の商品の番号 */
    int max_price; /* 最高額の商品の価格 */
    
    printf("商品 1 の価格 > ");
    scanf("%d", &price[0]);
    printf("商品 2 の価格 > ");
    scanf("%d", &price[1]);
    printf("商品 3 の価格 > ");
    scanf("%d", &price[2]);
    printf("商品 4 の価格 > ");
    scanf("%d", &price[3]);
    printf("商品 5 の価格 > ");
    scanf("%d", &price[4]);

    max_id = 1;
    int i = 0;
    max_price = price[0];

    for(i = 0; i < 4; ++i){
        if(price[i] > max_price){
            max_id = i + 1;
            max_price = price[i];
        }
    }
    printf("最高額の商品の番号は %d、価格は %d です。\n", max_id, max_price);
    return 0;
}
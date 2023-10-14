/* code: c1-2.c (v 1.18.00)*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10][4];
    int i, j;

    for(i=0; i<10;  i++){
        for(j=0; j<4; j++){
            a[i][j] = rand() % 100;
            printf("array[%d][%d] = %d\n", i, j, a[i][j]);
            }
            }
}
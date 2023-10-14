#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[9][9];
    int i, j;

    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            a[i][j] = (i + 1) * (j + 1);
            printf("%02d ",  a[i][j]);
        }
        printf("\n");
    }
}
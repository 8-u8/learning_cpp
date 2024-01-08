#include <stdio.h>

// int型の値を3つ受け取り、その中央値をint型で返す関数
int median(int a, int b, int c){
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c) {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if (b > c) {
        int tmp = b;
        b = c;
        c = tmp;
    }
    return b;
}

int main(){
    int a, b, c;
 
    printf("整数を3つ入力してください。\n");
    printf("1つ目 > ");
    scanf("%d", &a);
    printf("2つ目 > ");
    scanf("%d", &b);
    printf("3つ目 > ");
    scanf("%d", &c);
    
    printf("中央値は %d です。\n", median(a, b, c));
    
    return 0;
}

/*
【問題】
3つの整数を入力するとその中央値(大きさの順に並べたときの真ん中の値)を表示するプログラムを作ってください。
int型の値を3つ受け取り、その中央値をint型で返す関数median()を作って、それを使ってください。

【説明】
入力はa、b、cの順序で行い、4行目から21行目まででmedianを定義している。
入力された順にa、b、cの大小関係を、a > b、a > c、b > cの順で評価する。
if文の中では、それぞれtmpに大きい側の値を入れ、小さい側の値を改めて大きい側の値に代入する。
例えばa > bであるかどうかの評価(5行目～9行目)では、tmpにaを代入し、aに改めてbの値を代入する。
median関数は上記の順で大小関係を評価し、中央値になるbを返す。
                  
【出力結果】
$ gcc workC-2.c             
$ ./a.out
整数を3つ入力してください。
1つ目 > 3
2つ目 > 4
3つ目 > 5
中央値は 4 です。

*/
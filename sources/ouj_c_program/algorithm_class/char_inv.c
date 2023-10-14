#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 128
#define PUSH_SUCCESS 1
#define PUSH_FAILURE -1
#define POP_SUCCESS 2
#define POP_FAILURE -2

/* 
*hoge という形で宣言しているのはポインタ。
&hoge で、変数の格納されているアドレスにアクセスして、そこにある値を代入している。
*/

int peek(int stack[], int *top, int *data)
/*
peekは「チラ見する」という意味。
頂上のデータをチラ見するだけ。popは「取り出す」
*/
{
    if ((*top) > 0) {
        *data = stack[(*top) - 1];
        return POP_SUCCESS;
    }
    else {
        /*if stack is empty.*/
        return POP_FAILURE;
    }
}

void stack_init(int *top)
{
    *top = 0;
}

void display_char(int stack[], int top)
{
    int i;
    printf("stack (%d): ", top);
    for (i = 0; i < top; i++) {
        printf(" %c ", stack[i]);
    }
    printf("\n");
}

int push(int stack[], int *top, int data)
{
    if (*top >= MAX){
        /*stack overflow*/
        return PUSH_FAILURE;
    }
    else {
        stack[*top] = data;
        (*top) ++;
        return PUSH_SUCCESS;
    }
}

int pop (int stack[], int *top, int *data)
{
    if ((*top) > 0) {
        *data = stack[ (*top) - 1];
        (*top) --;
        return POP_SUCCESS;       
    }
    else{
        /*stack empty*/
        return POP_FAILURE;
    }
}

int main()
{
    int stack[MAX];
    int top, data;
    int i, len;
    char str[128];

    sprintf(str,"%s", "HOUSOU");
    len = strlen(str);

    stack_init (&top);

    // 文字列の長さだけpushをする。つまり、積む。
    // HOUSOUを1個ずつ積む。
    for(i = 0; i < len; i++)
    {
        data = str[i];
        push (stack, &top, data);
    }

    display_char(stack, top);
    // 文字列の長さだけpopする。つまり、取り出す。
    for(i = 0; i < len; i++)
    {
        pop (stack, &top, &data);
        printf ("%c", data);
    } 
    printf ("\n");

    return 0;

}
/* code: c1-3.c (v 1.18.00)*/
/*構造体の話*/
#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id;
    char grade;
    float average;
};
// 構造体の方を定義する
typedef struct Student STUDENT_TYPE;


int main()
{    
    STUDENT_TYPE a[10];
    a[0].id = 100;
    a[0].grade = 'A';
    a[0].average = 512.0;

    a[1].id = 101;
    a[1].grade = 'C';
    a[1].average = 350.0;

    a[2].id = 105;
    a[2].grade = 'B';
    a[2].average = 450.0;

    for(int i = 0; i < 3; i++)
    {
        printf("%d ", a[i].id);
        printf("%c ", a[i].grade);
        printf("%3.2f\n ", a[i].average);
    }
}

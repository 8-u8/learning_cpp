#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int value = 5;
    char buffer_one[8], buffer_two[8];

    strcpy(buffer_one, "one"); // set "one" for buffer_one
    strcpy(buffer_two, "two"); // set "two" for buffer_two

    printf("[before] buffer_two is %p , the value is \'%s\' .\n", buffer_two, buffer_two);
    printf("[before] buffer_one is %p , the value is \'%s\' .\n", buffer_one, buffer_one);
    printf("[before] the value is %p , the value is %d (0x%08x). \n", &value, value, value);

    printf("\n [STRCPY] copy %d bites to buffer_two. \n\n", strlen(argv[1]));
    strcpy(buffer_two, argv[1]); 

    printf("[after] buffer_two is %p , the value is \'%s\' .\n", buffer_two, buffer_two);
    printf("[after] buffer_one is %p , the value is \'%s\' .\n", buffer_one, buffer_one);
    printf("[after] the value is %p , the value is %d (0x%08x). \n", &value, value, value);


}

// overflow_example.c: In function ‘main’:
// overflow_example.c:15:31: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘size_t’ {aka ‘long unsigned int’} [-Wformat=]
//    15 |     printf("\n [STRCPY] copy %d bites to buffer_two. \n\n", strlen(argv[1]));
//       |                              ~^                             ~~~~~~~~~~~~~~~
//       |                               |                             |
//       |                               int                           size_t {aka long unsigned int}

// result. maybe my C versionn can detect buffer overflow. do not crash(pp 138)
// [before] buffer_two is 0x7ffe459b2d70 , the value is 'two' .
// [before] buffer_one is 0x7ffe459b2d68 , the value is 'one' .
// [before] the value is 0x7ffe459b2d64 , the value is 5 (0x00000005). 

//  [STRCPY] copy 10 bites to buffer_two. 

// [after] buffer_two is 0x7ffe459b2d70 , the value is '1234567890' .
// [after] buffer_one is 0x7ffe459b2d68 , the value is 'one' .
// [after] the value is 0x7ffe459b2d64 , the value is 5 (0x00000005). 
// *** stack smashing detected ***: terminated 
// Aborted (core dumped)
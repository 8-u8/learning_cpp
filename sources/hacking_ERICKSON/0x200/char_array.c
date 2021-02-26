// 0x261 
#include <stdio.h>

int main(){
    // prepare 20 bytes for each strings.
    char str_a[20];
    str_a[0] = 'H';
    str_a[1] = 'e';
    str_a[2] = 'l';
    str_a[3] = 'l';
    str_a[4] = 'o';
    str_a[5] = ',';
    str_a[6] = ' ';
    str_a[7] = 'W';
    str_a[8] = 'o';
    str_a[9] = 'r';
    str_a[10] = 'l';
    str_a[11] = 'd';
    str_a[12] = '!';
    str_a[13] = '\n';
    str_a[14] = 0; // null byte.
    // other 5 bytes are not used
    printf(str_a);
}

// char_array.c: In function ‘main’:
// char_array.c:20:12: warning: format not a string literal and no format arguments [-Wformat-security]
//    20 |     printf(str_a);
//       |            ^~~~~
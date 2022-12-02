#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// argv[1]に暗号文、argc[2]に鍵(数字)を入れていく。
int main(int argc, char* argv[]){
 int i;
 int j;
 int key = atoi(argv[2]);
 const char* flag = argv[1];
 printf("cpaw{");
 for(i = key - 1; i <= strlen(flag); i+=key){
   for(j = i; j>= i - key + 1; j--){
     printf("%c", flag[j]);
   }
 }
 printf("}\n");
 return 0;
}
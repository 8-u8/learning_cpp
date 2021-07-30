#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
    int N = 1000000;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; ++i){
        ++count;
    }
    printf("end.");
}
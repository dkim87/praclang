#include<stdio.h>

int main(){

    // works
    int arr[10000] = {0, 1}; // does this work or not defined?
    int abc[100] = {0,}; // all these things work?
    int xyz[10] = {0}; // lol

    // does not work
    int zxcv[10] = {}; // warning: ISO C forbids empty initializer braces

    int sum = 0;

    for (int i = 0; i < 10000; ++i) {
        sum += arr[i];
    }

    printf("%d\n", sum);

    return 0;
}

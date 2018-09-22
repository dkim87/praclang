#include<stdio.h>

int main(void){
    printf("hello world!\n");

    int x[10];
    x[0] = 1;
    x[0] = 1;
    x[0] = 1;
    x[0] = 1;
    x[0] = 1;
    x[0] = 1;
    x[0] = 1;
    x[0] = 1;
    x[0] = 1;
    x[0] = 1;

    for(int i = 0; i < 10; ++i){
        printf("x[%d] = %d\n", i, x[i]);
    }


    return 0;
}

#include<stdio.h>

int main(void){
    printf("hello world!\n");

    int x[10];
    x[0] = 5
    x[1] = 6
    x[2] = 7
    x[3] = 8
    x[4] = 9
    x[5] = 10
    x[6] = 11
    x[7] = 12
    x[8] = 13
    x[9] = 14

    for(int i = 0; i < 10; ++i){
        printf("x[%d] = %d\n", i, x[i]);
    }


    return 0;
}

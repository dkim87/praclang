#include<stdio.h>

int main(){

    int x = -1;

hello:
    if ((unsigned)x > 1){
        if((unsigned)x % 100000000 == 0){
            printf("%d\n", x);
        }
        x--;
        goto hello;
    }
    printf("end");

    return 0;
}

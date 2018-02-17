#include<stdio.h>

void swap(int *x, int *y){
    *x ^= *y ^= *x ^= *y;
}
int main(){
    int x = 5;
    int y = 3;

    swap(&x, &y);

    printf("%d %d\n", x, y);

    swap(&x, &x);
    printf("%d %d\n", x, y);

    return 0;
}


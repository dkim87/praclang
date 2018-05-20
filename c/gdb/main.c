#include<stdio.h>

int hey(int a, int b){
    printf("%d\n", a+b);
    return a+b;
}

int main(void){
    int x = 5;
    int y = 4;
    int z = x + y;
    hey(x, y);

    return 0;
}

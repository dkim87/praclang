#include<stdio.h>

int hamingDistance(int x, int y){
    x = x ^ y;
    y = 0;
    while(x){
        y += 1;
        x &= x-1;
    }
    return y;
}

int main(void){
    int x = 4;
    int y = 1;
    int z = hamingDistance(x, y);
    printf("%d\n", z);

    return 0;
}

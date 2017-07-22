#include<stdio.h>

int main(){
    int x = 5;
    long int p = (long int)&x;
    printf("%x\n", p);

    return 0;
}

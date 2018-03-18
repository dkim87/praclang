#include<stdio.h>
int add1(int x){return ++x;}
int main(){
    int x = 5; int y = 6;
    x = add1(x); y = add1(y);
    printf("%d %d\n", x, y); // prints 6, 7
    return 0;
}


#include<stdio.h>

int stack[2048];
int *sp=stack; // stack pointer
void *ip; // instruction pointer
int r1, r2, r3, r4; // registers

int main(){
    int x = 5; int y = 6;

    *sp = x; sp++; ip = &&ret1; goto add1; ret1: x = r1; // x = add1(x);
    *sp = y; sp++;ip = &&ret2; goto add1; ret2: y = r1; // y = add1(y);

    printf("%d %d\n", x, y); // prints 6, 7
    return 0;

add1: // int add(int x){return x++};
    r1 = sp[-1];
    r1 ++;
    sp--;
    goto *ip;
}


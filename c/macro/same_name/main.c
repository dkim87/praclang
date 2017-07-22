#include<stdio.h>

#define X 1
#define Y 2

int main(){

    //int XY = XY;

    //printf("%d\n", XY);

    /*
    int my = XY;

    printf("%d\n", X);
    printf("%d\n", X+Y);
    printf("%d\n", my);
    */

    int a = *&a;
    printf("%d\n", a);

    long int b = (long int)&b;
    printf("%p\n", &b);
    printf("%lx\n", b);
    long int *c = &b;
    printf("%lx\n", *c);
    printf("%p\n", c);
    long int **e = &c;
    printf("%lx\n", **e);
    printf("%p\n", *e);

    return 0;
}

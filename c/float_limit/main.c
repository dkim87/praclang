#include<stdio.h>
#include "print_bit_dqlib.h"

int main(){
    float a = 1;
    float b = 0;

    while(b < a){
        b = a;
        a ++;
    }

    printf("%f\n", a);

    a = 8388608;
    printf("a is %f\n", a);
    print_bit_float(&a);

    a ++;
    printf("a is %f\n", a);
    print_bit_float(&a);

    a += 0.499999999;
    printf("a is %f\n", a);
    print_bit_float(&a);

    b = 0.499999999;
    printf("b is %f\n", b);
    print_bit_float(&b);

    b = 0.499999999f;
    printf("b is %f\n", b);
    print_bit_float(&b);

    double x = 3;
    double y = 5;
    printf("x is %f\n", x);
    print_bit_double(&x);
    printf("%d is %d\n", x, y);

    char c = 127; char d = 14;
    printf("%d, %d\n", c, d);

    float f = 1.0f;
    double dd = 1;

    printf("float =%d\ndouble= %f", f, dd);

    return 0;
}

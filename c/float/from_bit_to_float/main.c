#include<stdio.h>
#include "print_bit_float.h"

int main(){

    float a;
    for (int i = -5; i < 5; ++i) {
        a = (float)i;
        printf("a is %f\n", a);
        print_bit_float(&a);
    }

    a = 2.0f;
    for (int i = 0; i < 10; ++i) {
        a = a * a;
        printf("a is %f\n", a);
        print_bit_float(&a);

    }

    double b;
    b = 2.0;
    for (int i = 0; i < 10; ++i) {
        b = b * b;
        printf("b is %g\n", b);
        print_bit_double(&b);
    }

    printf("\n");
    print_bit(45);
    printf("\n");
    print_bit_reverse(45);
    int c = 45;
    print_bitn(&c, sizeof (int));

    return 0;
}

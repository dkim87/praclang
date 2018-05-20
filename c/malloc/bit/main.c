#include<stdio.h>
#include<stdlib.h>
#include "print_bit_dqlib.h"

int main(){
    int *a = malloc(4);
    int *b = malloc(4);

    *a = 5;
    *b = 6;

    printf("b - a: %ld\n", (long int)b - (long int)a);

    printf("a : %p\n", a);
    print_bitn(a-2, 24);
    printf("b : %p\n", b);
    print_bitn(b, sizeof *b );

    return 0;
}

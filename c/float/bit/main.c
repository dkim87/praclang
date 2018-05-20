#include<stdio.h>
#include "print_bit_dqlib.h"

int main(){
    float a = 1.5;
    printf("---a---\n");
    print_bitn(&a, sizeof a);

    double b = 1.5;
    printf("---b---\n");
    print_bitn(&b, sizeof b);

    return 0;
}

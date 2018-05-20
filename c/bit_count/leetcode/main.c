// https://www.codentalks.com/t/topic/782/7

#include<stdio.h>
#include "print_bit_dqlib.h"

// count number of bits
unsigned count(unsigned n) {
    unsigned left, right;
    printf("%x\n", n);
    print_bitn(&n, sizeof n);

    left = (n & 0x55555555);
    right = ((n >>  1) & 0x55555555);
    printf("left = %x\tright = %x\n", left, right);
    n = left + right;
    printf("n = %x\n", n);
    print_bitn(&n, sizeof n);

    left = (n & 0x33333333);
    right = ((n >>  2) & 0x33333333);
    printf("left = %x\tright = %x\n", left, right);
    n = left + right;
    printf("n = %x\n", n);
    print_bitn(&n, sizeof n);

    left = (n & 0x0F0F0F0F);
    right = ((n >>  4) & 0x0F0F0F0F);
    printf("left = %x\tright = %x\n", left, right);
    n = left + right;
    printf("n = %x\n", n);
    print_bitn(&n, sizeof n);

    left = (n & 0x00FF00FF);
    right = ((n >>  8) & 0x00FF00FF);
    printf("left = %x\tright = %x\n", left, right);
    n = left + right;
    printf("n = %x\n", n);
    print_bitn(&n, sizeof n);

    left = (n & 0x0000FFFF);
    right = ((n >> 16) & 0x0000FFFF);
    printf("left = %x\tright = %x\n", left, right);
    n = left + right;
    printf("n = %x\n", n);
    print_bitn(&n, sizeof n);
    return n;
}


int main(void){

    unsigned x = 0x12341234;

    count(x);



    return 0;
}


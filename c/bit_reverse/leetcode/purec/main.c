// https://leetcode.com/problems/reverse-bits/discuss/54760/My-3ms-pure-C-solution
#include<stdio.h>
#include<stdint.h>
#include "print_bit_dqlib.h"

uint32_t reverseBits(uint32_t n) {
    uint32_t m = 0;
    for (int i = 0; i < 32; i++, n >>= 1) {
        printf("i = %d\t: m = %d\n", m);
        print_bitn(&m, sizeof m);
        m <<= 1;
        m |= n & 1;
    }
    return m;
}

int main(void){
    //uint32_t x = 5;
    //uint32_t y = reverseBits(x);

    uint32_t x = 0x87654321;
    uint32_t y = reverseBits(x);

    printf("x bit\n");
    print_bitn(&x, sizeof x);
    printf("y bit\n");
    print_bitn(&y, sizeof y);


    printf("%u\n", y);

    return 0;
}

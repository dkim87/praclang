// https://leetcode.com/problems/reverse-bits/discuss/54741/O(1)-bit-operation-C++-solution-(8ms)

#include<stdio.h>
#include<stdint.h>
#include "print_bit_dqlib.h"

uint32_t reverseBits(uint32_t n);

int main(void){
    uint32_t x = 0x87654321;
    print_bitn(&x, sizeof x);

    uint32_t y = reverseBits(x);

    printf("y is %d\n", y);
    printf("y is %x\n", y);
    print_bitn(&y, sizeof y);

    return 0;
}

uint32_t reverseBits(uint32_t n) {
    n = (n >> 16) | (n << 16);
    n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
    n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
    n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
    n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);
    return n;
}

// *****************
// print_bit library
// *****************
//
// available:
// - print_bit: little endian, print one bit
// - print_bit_reverse: big endian, print one bit
// - print_float
// - print_double
// - print_bitn: print n bits around pointer. Incremental.
// e.g. int a = 45; print_bitn(&a, sizeof a) // prints bit representation of 45

#ifndef PRINT_BIT_DQLIB_H
#define PRINT_BIT_DQLIB_H

#include<stdio.h>

void print_bit(const unsigned char);
void print_bit_reverse(const unsigned char c);
void print_bit_float(void const * const vp);
void print_bit_double(void const * const vp);
void print_bitn(void const * const vp, const size_t n);

#endif /* ifndef PRINT_BIT_DQLIB_H */

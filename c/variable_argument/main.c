#include<stdio.h>
#include<math.h>
#include<stdarg.h>
#include "print_bit_dqlib.h"

double stddev(int count, ...){
    double sum = 0;
    double sum_sq = 0;
    va_list args;
    printf("sizeof: %lu\n", sizeof args);
    printf("sizeof: %lu\n", sizeof (va_list));
    printf("sizeof: %lu\n", args);

    printf("args: %p\n", args);
    print_bitn((void*)&args-8, sizeof args);
    va_start(args, count);
    printf("args: %p\n", args);
    print_bitn((void*)&args-8, sizeof args);

    for (int i = 0; i < count; ++i) {
        double num = va_arg(args, double);
        sum += num;
        sum_sq += num*num;
    }
    va_end(args);
    return sqrt(sum_sq/count - (sum/count)*(sum/count));
}

int main(){

    double std = stddev(5, 45,  5, 6, 7, 6, 4);

    printf("%g\n", std);

    unsigned char a = -1;
    for(int i =0; i <= 255; ++i){
        a = i;
        printf("%d\t: %d\n -> ", i, a);
    }

    char b = 255;
    printf("%d\n", b);
    printf("%lu\n", b);

    return 0;
}

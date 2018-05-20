#include<stdio.h>
#include<math.h>
#include "print_bit_dqlib.h"

int main(){
    float a = 32;

    for (int i = 0; i < 20; ++i) {
        printf("a is %f\n", a);
        print_bit_float(&a);
        a /= 2;
    }

    a = 0.03125;
    for(size_t i=0; i < 9; ++i){
        printf("a is %f\n", a);
        print_bit_float(&a);
        a += 0.03125;
    }

    a = a * 10000;

    float b = 3125;

    printf("a is %.15f\n", a);
    print_bit_float(&a);
    printf("b is %.15f\n", b);
    print_bit_float(&b);

    a = 0.01;
    printf("a is %.15f\n", a);
    print_bit_float(&a);

    printf("a is %.15f\n", a);
    print_bit_float(&a);

    long int c = 100000000000000;
    long int target = 10000000000000;
    long int step = 50000000000000;

    for(int i = 0; i<13; i++){
        printf("c is %ld\n", c);
        if (target < c){
            c = c - step;
        }else if (target > c){
            c = c + step;
        }else{
            printf("wow!");
        }
        step *= 0.5;
        printf("now step is %ld\n", step);
    }

    a = 1;
    for(int i = 0; i < 15; ++i){
        printf("a is %f\n", a);
        //printf("a is %15.15f\n", a);
        print_bit_float(&a);
        a *= 10;
    }

    a = 0.75;
    printf("a is %f\n", a);
    print_bit_float(&a);

    a = 0.625;
    printf("a is %f\n", a);
    print_bit_float(&a);

    a = 0.01;
    printf("a is %15.15f\n", a);
    printf("a is %f\n", a); // rounded to 0.01.. wow!
    print_bit_float(&a);

    a = 0.125;
    a *= 0.5;
    a *= powf(0.5,3);
    a = 0.0078125;
    printf("a is %15.15f\n", a);
    printf("a is %f\n", a);
    print_bit_float(&a);

    a = powf(2, 126);
    printf("a is %f\n", a);
    print_bit_float(&a);

    a *= 2;
    printf("a is %f\n", a);
    print_bit_float(&a);

    a = pow(2,127);
    a += pow(2,127)-pow(2,104);
    a += pow(2,102);
    printf("a is %f\n", a);
    print_bit_float(&a);

    a *= 2;
    printf("a is %f\n", a);
    print_bit_float(&a);

    a = 0;
    b = a-0.5;
    while(b < a){
        b = a;
        a += 0.5;
    }
    printf("%f %f\n", a, b);

    a = 8388606;
    while (a < 8388608){
        a += 0.5;
        printf("a is %f\n", a, b);
        print_bit_float(&a);
    }

    a = 8388607.7;
    printf("a is %f\n", a);
    print_bit_float(&a);
    //a += 1; // 8
    a += 1.0001; // 9
    printf("a is %f\n", a);
    print_bit_float(&a);

    a = 5;
    b = 5;

    printf("%f\n", pow(a,b));

    return 0;
}

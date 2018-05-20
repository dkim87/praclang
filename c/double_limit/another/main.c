#include<stdio.h>
#include<math.h>
#include "print_bit_dqlib.h"

int main(){
    double a = pow(2, 53)-10;

    printf("%lf\n", a);
    print_bit_double(&a);

    double b = 0;
    while ( b < a ){
        b = a;
        a++;
        printf("%lf\n", a);
    }


    return 0;
}

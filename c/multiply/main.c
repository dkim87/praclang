#include <stdio.h>

// https://stackoverflow.com/questions/29787310/does-pow-work-for-int-data-type-in-c
int int_pow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp & 1)
           result *= base;
        exp /= 2;
        base *= base;
    }
    return result;
}

int main(void){
    int x = 5;
    int y = 5;

    int z = 100000000;
    int w = 30;

    printf("%d\n", z*w);

    return 0;
}

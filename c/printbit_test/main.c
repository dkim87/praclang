#include<stdio.h>
#include "printbit.h"
#include <limits.h>

int main(){

    for (int i = 0; i < 128; i++)
        printbit(i);

    return 0;
}

#include<stdio.h>
int main(){
    char c = 255;
    printf("%u\n", c); // we might expect 255, but no.
    // c is signed char, so c is internally interpreted as -1.
    // printf function receives -1 as its argument, and then convert it to unsigned.
    // -1 converted to unsigned is uint max.

    return 0;
}

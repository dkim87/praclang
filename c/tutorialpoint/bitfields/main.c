#include <stdio.h>

typedef __attribute__((__packed__)) struct {
    unsigned int myint:27;
    unsigned int myint2:4;
} bignum;

typedef struct {
    unsigned int myint;
    unsigned int myint2;
} bignum2;

int main(){
    printf("hello world.\n");
    bignum mynum;
    bignum2 mynum2;
    mynum.myint = 1;

    printf("value of sizeof(mynum): %lu\n",sizeof(mynum));
    printf("value of sizeof(mynum2): %lu\n",sizeof(mynum2));

    return 0;
}

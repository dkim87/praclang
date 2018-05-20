#include<stdio.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include "print_bit_dqlib.h"


int main(void){
    struct in_addr a = {0x1234};
    int b = a.s_addr;
    printf("%lu\n", b);

    unsigned int x = 0x12341234;
    unsigned int y = htonl(x);
    unsigned int z = ntohl(x);
    print_bitn(&x, sizeof x);
    print_bitn(&y, sizeof y);
    printf("%x\n", x);
    printf("%x\n", y);
    printf("%x\n", z);
    printf("%x\n", ntohl(x));
    printf("%d\n", htonl(x));
    printf("%d\n", ntohl(x));


// 101000000000000000000000000
// 000100000000000000000000000

    return 0;
}

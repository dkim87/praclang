#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int i = 0;
    while(fork()||!fork())
        printf("%d\n", ++i);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "printbit.h"

#define MINREQ 0xFFF // arbitrary minimum

int main(){
    printbit(MINREQ);
    unsigned int required = (unsigned int) -1; // adapt to native uint
    printbit(required);
    printf("%u\n", required);
    char *mem = NULL;
    while (mem == NULL){
        printf ("Required %X\n", required);
        mem = malloc(required);
        printf("after malloc: mem = %p\n", mem);
        required >>= 1;
        printbit(required);
        if (required < MINREQ){ //id 1
            printf("if id 1");
            required >>= 1;
            printbit(required);
            printf("if id: 1\n");
            if (mem) {
                printf("freeing mem: %p\n", mem);
                free (mem);
            }
            printf("if id 3\n");
            printf("Cannot allocate enough memory\n");
            return 1;
        }
    }

    free(mem);
    mem = malloc(required);
    if (mem == NULL){ // id 2
        printf("if id 2");
        printf("Cannot enough allocate memory\n");
        return 1;
    }
    printf("Memory size allocated = %X\n", required);
    free(mem);

    printf("return 0\n");
    return 0;
}

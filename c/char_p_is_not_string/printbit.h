#ifndef PRINTBIT_H
#define PRINTBIT_H
#include<stdio.h>
#include<string.h>

void printbit(int);
void printarray(int[], size_t);
void print_pchar(char * px);
void printarray_noreturn(int arr[], size_t arrsize);

void printbit(int x){
    int arrsize = 8 * sizeof(int); // 8 (=bits per byte) * 4 (=bytes per int) = 32
    int arr[arrsize];
    int arr_bytelen = arrsize * sizeof(int); // 32 * 4 = 128 bytes = sizeof(arr)
    memset(arr,0,  arr_bytelen);
    // or memset(arr, 0, sizeof(arr));

    //printarray(arr, arrsize); // result -> all zero -> works as expected -> happy

    /*
      // unnecessary
    if(!x){ //x == 0
        printf("0\n");
        return;
    }
    */

    int index=arrsize-1;
    while(x){
        if (x&1)
            arr[index]=1;
        else
            arr[index]=0;
        if (x<0) // patch: c performs arithmatic shift if x is negative, which leads to false behavior. Logic shift required, therefore unsigned x is used instead.
            x = (unsigned)x>>1;
        else
            x >>= 1;
        index--;
    }
    printarray(arr, arrsize);
}

void printbit_char(char c){
    int char_bits = 8 * sizeof(char);
    int arr[char_bits];
    memset(arr,0, sizeof(arr));

    int index= char_bits-1;
    while(c){
        if (c&1)
            arr[index]=1;
        else
            arr[index]=0;
        if (c<0) // patch: c performs arithmatic shift if x is negative, which leads to false behavior. Logic shift required, therefore unsigned x is used instead.
            c = (unsigned)c>>1;
        else
            c >>= 1;
        index--;
    }
    printarray_noreturn(arr, char_bits);
}

void printarray(int arr[], size_t arrsize){
    for (unsigned int i=0; i<arrsize; i++) {
        printf("%d", arr[i]);
        if(!((i+1)%8)){
            printf("\t");
        }
    }
    printf("\n");
}

void printarray_noreturn(int arr[], size_t arrsize){
    for (unsigned int i=0; i<arrsize; i++) {
        printf("%d", arr[i]);
        if(!((i+1)%8)){
            printf("\t");
        }
    }
}

// for little endian
// prone to segfault
/*
void print_pchar(char * px){
    printf("%p\t%p\t%p\t%p\n", px+3, px+2, px+1, px);
    printbit_char(*(px+3));
    printbit_char(*(px+2));
    printbit_char(*(px+1));
    printbit_char(*px);
    printf("\n");
    printf("%c\t\t%c\t\t%c\t\t%c\n", *(px+3), *(px+2), *(px+1), *(px+0));
}
*/

void print_pchar(char * px){
    printf("%p\n", px);
    printbit_char(*px);
    printf("\n");
    printf("%c\n", *px);
}


#endif // PRINTBIT_H

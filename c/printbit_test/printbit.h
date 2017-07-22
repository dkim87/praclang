#ifndef PRINTBIT_H
#define PRINTBIT_H
#include<stdio.h>
#include<string.h>

void printbit(int);
void printarray(int[], size_t);

void printbit(int x){
    int arrsize = 8 * sizeof(int);
    int arr[arrsize];
    int arr_bytelen = arrsize * sizeof(int);
    memset(arr,0,  arr_bytelen);
    //printarray(arr, arrsize); // result -> all zero

    if(!x){ //x == 0
        printf("0\n");
        return;
    }

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

void printarray(int arr[], size_t arrsize){
    for (unsigned int i=0; i<arrsize; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

#endif // PRINTBIT_H

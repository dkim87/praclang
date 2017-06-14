#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ARR_SIZE 3

typedef struct book{
    int x[ARR_SIZE];
    int y[ARR_SIZE];
}book;

void int_arr_print(int arr[ARR_SIZE]){
    for (unsigned int i=0; i<ARR_SIZE; i++) {
        printf("%X ",arr[i]);
    }
}

void printbk(book bk){
    int_arr_print(bk.x);
    printf("\t");
    int_arr_print(bk.y);
    printf("\n");
}

int main(){
    book *myb = (book *)malloc(2 * sizeof *myb);
    printbk(*myb); // !@#$ !@#$ %@#$!
    printbk(*(myb+1));

    memset(myb, 0, 2 * sizeof *myb); // yes it works
    printbk(*myb); // 0 0 0 0 0
    printbk(*(myb+1));

    memset(myb, 1, 2 * sizeof *myb);
    printbk(*myb); //
    printbk(*(myb+1));

    memset(myb, 0xFF, 2 * sizeof *myb-4); // y does not change
    printbk(*myb); // ffffffff
    printbk(*(myb+1));


    //warning!! memset is not setting 4 bytes. It only sets 1 byte.

    return 0;
}

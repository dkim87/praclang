#include<stdio.h>

void myprint(const int *const ptr){
    printf("%d\n", *ptr);
}

int main(){

    int x = 4;
    int y = 5;

    const int *ptr1=&x;
    int const *ptr2=&x;
    int *const ptr3=&x;
    // const *int ptr4; // not allowed
    // so it turns out that * must be always at the right side of int
    const int *const ptr5 = &x;
    // const const int *ptr6 = &x;
    // int *const const ptr7=&x;
    int const *const ptr8=&x;
    // ptr8 = &y; // not allowed
    // *ptr8 = 5; // not allowed
    const int *const ptr9;

    myprint(ptr5);
    myprint(ptr8);
    myprint(ptr9);


    return 0;
}

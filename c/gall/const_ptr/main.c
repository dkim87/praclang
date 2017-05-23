#include<stdio.h>

int main(){
    int a = 3;
    int b = 5;
    const int *ptr1=&a;
    int const *ptr2=&a;
    int *const ptr3=&a;
    ptr1=&b;
    ptr2=&b;
    *ptr3 = 6;

    return 0;
}

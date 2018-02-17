#include<stdio.h>

// custom-made int pointer
// works in 64-bit. Not sure in 32-bit but probably works.

int deref(long long p){
    int *ptr = (int *)p;
    return *ptr;
}

void deref_change(long long p, int y){
    int *ptr = (int *)p;
    *ptr = y;
}

// warning: this code is full of shxt.
int main(){
    int x = 5;
    long long myptr = (long long)&x;

    // print the value of x using long long myptr
    printf("%d\n", deref(myptr));

    // change the value of x using long long myptr
    deref_change(myptr, 6);
    printf("%d\n", x);

    return 0;
}


#include<stdio.h>
#include<stdlib.h>

long retint(unsigned long x){
    return x;
}

int main(){
    unsigned long x = SIZE_MAX;
    unsigned long y = retint(x);
    return 0;
}

// seems it does not matter as long as sizeof is the same. (if SIZE_MAX -> int, loss)

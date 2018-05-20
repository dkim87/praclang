#include "csapp.h"

int main(){
    int n = 5;
    int * x = (int *)Malloc(n * sizeof *x);

    printf("%d\n", *x);
    printf("%d\n", *x+1);

    return 0;
}

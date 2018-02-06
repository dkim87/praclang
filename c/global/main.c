#include<stdio.h>
int global = 10;
int main(){

    int *a;
    a = (int *)global;
    printf("%p\n", a);

    return 0;
}

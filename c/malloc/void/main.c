#include<stdio.h>
#include <stdlib.h>

int main(){

    int *px = malloc(sizeof *px);
    int **ppx = malloc (sizeof *ppx);
    ppx = &px;

    printf("%d\n", *px);
    printf("%d\n", **ppx);
    printf("%p\n", px);
    printf("%p\n", *ppx);
    printf("%p\n", ppx);

    return 0;
}

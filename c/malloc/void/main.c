#include<stdio.h>
#include <stdlib.h>

int main(){

    int *px = malloc(sizeof *px);
    int **ppx = malloc (sizeof *ppx);
    // lol what was I doing here... why didn't I free this? lol This is a code written very long ago.
    ppx = &px;


    printf("%d\n", *px);
    printf("%d\n", **ppx);
    printf("%p\n", px);
    printf("%p\n", *ppx);
    printf("%p\n", ppx);

    return 0;
}

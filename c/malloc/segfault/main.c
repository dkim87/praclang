#include<stdio.h>
#include<stdlib.h>

int main() {
    int* p;
    //p = (int*)malloc(sizeof(int));
    //p = malloc(sizeof(int));
    printf("%p\n", p);
    p = malloc(sizeof *p);
    printf("%p\n", p);
    printf("%d\n", *p);
    *p = 10;
    printf("%p\n", p);
    printf("%d\n", *p);
    return 0;
}

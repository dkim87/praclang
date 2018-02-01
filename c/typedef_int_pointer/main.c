#include<stdio.h>
typedef int *int_pointer;
int main(){
    //int_pointer a,b,c;
    int* a, b, c;
    int x=3;
    printf("%d\n", x);
    printf("%p\n", &x);

    a = &x;
    b = &x;
    c = &x;

    printf("%d\n", *a);
    printf("%d\n", *b);
    printf("%d\n", *c);

    printf("%p\n", a);
    printf("%p\n", b);
    printf("%p\n", c);

    return 0;
}

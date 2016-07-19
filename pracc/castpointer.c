#include<stdio.h>

int main(){
    int a = 3;
    int *p;
    p = (int *)&a;

    printf("a value: %d\n",a);
    printf("a address: %d\n", &a);
    printf("a address: %s\n", &a);
    printf("p value: %d\n",*p);
    printf("p address: %d\n",p);

    int b = 5;
    int *q = &b;

    printf("q value: %d\n",*q);
    printf("q address: %d\n",q);

    return 0;
}


#include<stdio.h>

int main(){

    int x;

    scanf("%d",&x);

    int a[x];
    printf("%d\n",sizeof(a)/sizeof(a[0]));

    a[0]=3;
    a[1]=4;

    printf("%d %d %p %p %p", a[0], a[1], a, &a[0], &a[1]);

}


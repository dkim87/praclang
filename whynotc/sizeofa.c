#include<stdio.h>

int main(){

    int a=-1;

    sizeof(a)<a?printf("%d\n",a):printf("sizeofa");

    printf("%d\n",a-sizeof(a));
    printf("%lu\n",a-sizeof(a));
    printf("%d\n",(int)(a-sizeof(a)));

    return 0;
}


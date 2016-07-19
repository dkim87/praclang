#include<stdio.h>

int main(){

    int x,y,* a,* b,tmp;

    scanf("%d%d",&x,&y);

    a=&x;
    b=&y;

    tmp=*a;
    *a=*b;
    *b=tmp;

    printf("%d %d\n",x,y);

    return 0;
}


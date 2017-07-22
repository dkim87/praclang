#include<stdio.h>

int*foo(int*px){
    return px;
}

int main(){
    int x=4;
    int*px=&x;
    (*px)++;
    printf("%d %d\n", x, *px);

    int y=5;
    int*py=&y;
    int*py2=foo(py);

    printf("%p %p %p\n", &y, py, py2);

    return 0;
}

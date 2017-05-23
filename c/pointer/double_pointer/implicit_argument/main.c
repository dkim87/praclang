#include<stdio.h>

void myfunc1 (int *myint_p){
    printf("%d\n", *myint_p);
}
void myfunc2 (int **myint_p_p){
    printf("%d\n", **myint_p_p);
}

int main(){
    int x = 5;
    int *xp = &x;
    int **xpp = &xp;

    myfunc1(&x);
    myfunc1(xp);
    myfunc2(&xp);
    myfunc2(xpp);
    return 0;
}

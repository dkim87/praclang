#include <stdio.h>

int main(){

    int x = 5;

    int* p = &x;

    int** pop = &p;

    printf("%d\n",x);
    printf("%d\n",*p);
    printf("%d\n",**pop);
    printf("%p\n",&x);
    printf("%p\n",p);
    printf("%p\n",*pop);
    printf("%p\n",&p);
    printf("%p\n",pop);
    printf("%p\n",&pop);

    return 0;

}

#include <iostream>
using namespace std;

void printirr(int && irr){
    printf("%d\n", irr);
}

int main(){

    int y = 8;
    int &x = 5;


    printf("%d\n", x);
    printf("%p\n", (void*)&x);

    printirr(7);


    x++;
    printf("%d\n", x);
    printf("%p\n", (void*)&x);

    int a = 5;
    int &ar = a;
    int &ar2 = ar;

    printf("%d %d %d\n", a, ar, ar2);
    printf("%p %p %p\n", (void*)&a, (void*)&ar, (void*)&ar2);


    return 0;
}

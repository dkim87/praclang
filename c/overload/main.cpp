#include<stdio.h>

void print_int(int a){
    printf("%d\n", a);
}

void print_int(int* a){
    printf("%d\n", *a);
}

int main(){
    int a = 0;

    print_int(a);
    print_int(&a);

    return 0;
}

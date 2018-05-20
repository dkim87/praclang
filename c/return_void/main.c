#include<stdio.h>

void * retvoid(){
    printf("hello world!\n");
    return -1;
}

int main(){
    int * x;
    printf("%p\n", x);
    x = retvoid();
    printf("%p\n", x);

    return 0;
}

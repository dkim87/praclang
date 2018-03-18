#include<stdio.h>
#include "print_bitn.h"

int func1(int x){
    int a = 0;
    int y = -1;
    int b = 0;
    return a+b + y + x;
}

int func2(int x){
    int a = 0;
    int y = -1;
    int b = 0;
    return a+b+ y - x;
}

void func3(){
    printf("hello\n");
}

int main(){
    unsigned long func_len = (unsigned long)&func2 - (unsigned long)&func1;
    unsigned long func2_len = (unsigned long)&func3 - (unsigned long)&func2;

    printf("%lu\n", func_len);
    printf("%lu\n", func2_len);
    printf("---func1---\n");
    print_bitn((void *)func1, func_len);
    puts("");
    printf("---func2---\n");
    print_bitn((void *)func2, func2_len);

    return 0;
}

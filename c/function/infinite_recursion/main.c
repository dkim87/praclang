#include<stdio.h>

void func1();
void func2();

int main(){

    func1();
    return 0;
}

void func1(){
    printf("hello.\n");
    func2();
}
void func2(){
    printf("world!.\n");
    func1();
}

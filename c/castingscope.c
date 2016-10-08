#include<stdio.h>
char c = 'Z';
int foo(float a){
    int b = (int)(a*10);
    return b+42;
}


int main(){
    float a=2.5;
    int b = foo(a);
    char c = (char)b;
    printf("%.1f %d %c",a,b,c);
    return 0;
}


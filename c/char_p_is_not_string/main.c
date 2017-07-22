#include<stdio.h>
#include "printbit.h"

void test_short(int i);
void test_char(int i);
void test_int(int i);

int main(){

    test_char(70);
    //test_short(32);
    //test_int(32);

    return 0;
}

void test_short(int i){
    if (i>118)
        return;
    short x = i;
    char *s = (char *)&x;
    printf("%d\t: at %p\t %s\n", i, s, s);
    test_short(++i);
}

void test_char(int i){
    if(i>127)
        return;
    char z=90;
    char y=80;
    printf("%p %p\n", &z, &y);
    char x = i;
    char *s = &x;
    printf("%d\t: at %p\t %s\n", i, s, s);
    print_pchar(s);
    for(int i = -5; i<5; i++){
        if (s+i != 0){
            print_pchar(s+i);
        }
    }
    test_char(++i);
}

void test_int(int i){
    if(i>128)
        return;
    int x = i;
    char*s=(char*)&x;
    printf("%d\t: at %p\t %s\n", i, s, s);
    test_int(++i);
}

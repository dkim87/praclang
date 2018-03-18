#include<stdio.h>

void test_print_char256(){
    char a = 0;

    for (int i = 0; i <= 255; ++i) {
        a = i;
        printf("%4d: %6c: %4x\n", i, a, i);
    }
}

void test(){
    test_print_char256(); // pass
}

int main(){
    test();
    return 0;
}



// How to use?
// If you have a first class variable, a struct or an object that you want to inspect,
// then simply just pass its address (pointer)
// to print_bitn(void *vp, size_t n) function.
// It will print its

#ifndef PRINT_BITN_H
#define PRINT_BITN_H
#include<stdio.h>

const char masks[] = {1, 2, 4, 8, 16, 32, 64, (char)128};

void print_bit(const char c){
    // real implementation of show bit

    for (size_t i = 0; i < 8; ++i) {
        printf("%d", c & masks[i] ? 1:0);
    }
    puts("");
}

void print_bitn(void const * const vp, const size_t n){
    char *p = (char *)vp;
    for(size_t i = 0; i < n; i++){
        printf("%p: ", p);
        print_bit(*p);
        p++;
    }
}

void test_print_bit(){
    print_bit(0); // 00000000
    print_bit(1); // 10000000
    print_bit(2); // 01000000
    print_bit(3); // 11000000
    print_bit(16); // 00001000
    print_bit((char)128); // 00000001
    print_bit((char)255); // 11111111
}

void test_char_bit(){
    printf("print a ---\n");
    char a[] = {60, 61, 62, 63, 64};
    print_bitn(a, 5 * sizeof *a);

    printf("print b ---\n");
    int b[] = {0,1,2,3};
    print_bitn(b, 4 * sizeof *b);

}

void test_print_char256(){
    char a = 0;

    for (int i = 0; i <= 255; ++i) {
        a = i;
        printf("%d\t: %c\t -> ", i, a);
    }
}

/*
void test(){
    //test_print_char256(); // pass
    //test_print_bit(); // pass
    test_char_bit(); // pass
}

int main(){
    test();
    return 0;
}
*/

#endif /* ifndef PRINT_BITN */

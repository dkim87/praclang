// https://stackoverflow.com/questions/11770451/what-is-the-meaning-of-attribute-packed-aligned4

typedef struct{
    char Data1;
    // 3-Bytes padding added here
    int Data2;
    unsigned short Data3;
    char Data4;
    // 1-byte added here
}sSampleStruct; // size == 12

typedef struct{
    char Data1;
    int Data2;
    unsigned short Data3;
    char Data4;
}__attribute__((packed, aligned(1))) sSampleStruct2; // size == 8

typedef struct{
    char Data1;
    int Data2;
    unsigned short Data3;
    char Data4;
}__attribute__((__packed__)) sSampleStruct3; // size == 8


#include<stdio.h>

int main(void){
    printf("%lu\n", sizeof(sSampleStruct)); // 12
    printf("%lu\n", sizeof(sSampleStruct2)); // 8
    printf("%lu\n", sizeof(sSampleStruct3)); // 8

    return 0;
}

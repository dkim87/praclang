#include <stdio.h>

char *mystrcpy(char *dst, const char *src){
    char *temp=dst;
    while(*src){
        *temp++ = *src++;
    }
    *temp='\0';
    return dst;
}

int main(){

    // if not char a[] but char *a, bus error
    char a[] = "abcdearstarst"; // if a's length is shorter than b, Abort trap 6 error
    char b[] = "hello";
    char *c = mystrcpy(a,b);

    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);

    printf("size of ?");
    size_t size_a = sizeof(a);
    int size_b = sizeof(b);
    printf("%lu\n", size_a);
    printf("%d\n", size_b);

    return 0;
}

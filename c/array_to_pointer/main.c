#include<stdio.h>
int main(){
    char *a[3] = {"abc", "def", "ghi"};

    printf("%lu\n", sizeof(a[2]));
    printf("%p\n", a[2]);
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
    printf("%c\n", *a[2]);
    printf("%s\n", a[2]);

    char str1[10] = "hello";

    return 0;
}

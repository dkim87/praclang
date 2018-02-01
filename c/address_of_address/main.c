#include<stdio.h>
int main(){
    int a = 4;
    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%p\n", &&a); // error

    return 0;
}

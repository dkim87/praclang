#include<stdio.h>
int main(){
    int x = 5;
    void *p = &x;
    printf("%p\n", p);
    p++;
    printf("%p\n", p);

    return 0;
}

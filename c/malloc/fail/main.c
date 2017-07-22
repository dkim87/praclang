#include<stdio.h>
#include<stdlib.h>

int main(){
    void *p = (void *)malloc(1000000000000000);
    
    printf("%p\n", p);
    if(!p)
        printf("failed\n");

    printf("hey hello\n");

    return 0;
}

#include<stdio.h>
#include <stdlib.h>

int main(){

    void *p=NULL;
    p=malloc(1);
    printf("%-20s %-20s %p\n", "<< p >> ", " has value of ", p);
    long int i=0;
    long int sum=0;
    while(p!=NULL){
        sum+=i;
        printf("sum is %ld\n", sum);
        i+=100000000;
        printf("allocating %ld bytes\n",i);
        // free(p);
        p = malloc(i);
        printf("%-20s %-20s %p\n", "<< p >> ", " has value of ", p);
    }

    printf("hello world!\n");

    return 0;
}

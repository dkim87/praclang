#include<stdio.h>

int main(){

    int i=0;
    unsigned long int two=1;
    for(i=0;i<70;i++){
        two*=2;
        printf("two powered by %d equals\n%lu man \n",i+1,two);
    }

    return 0;
}


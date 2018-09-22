#include<stdio.h>

int main(void){
    int bs = 20;
    for(int i = bs; i; i =  ((i - 1) & bs)){
        printf("i = %d\n", i);
        printf("bs = %d\n", bs);
    };

    return 0;
}

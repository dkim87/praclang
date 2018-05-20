#include<stdio.h>

int main(){
    unsigned char c = -5;

    for(int i = 0; i < 10; ++i){
        printf("%d\n", c);
        c++;
    }

    return 0;
}

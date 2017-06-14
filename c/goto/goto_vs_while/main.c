#include<stdio.h>

int main(){
    int x = -1;

    while((unsigned)x > 0){
        if ((unsigned)x%100000000 == 0){
            printf("%d\n", x);
        }
        x--;
    }

    return 0;
}

#include <stdio.h>

int main (){
    int i = 0;
    for (i = 0; i < 1000000; i++){
        printf("\rIn progress %d", i/10000);
    }
    printf("\n");
}

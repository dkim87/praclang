#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    int number = 100000000;
    p = malloc(sizeof *p * number);
    if(!p){
        printf("not allocated\n");
        return 0;
    }

    for (int i = 0; i< number ; i++++){
        if(p[i])
            printf("%d\n", i);
    }
    puts("");

    return 0;
}

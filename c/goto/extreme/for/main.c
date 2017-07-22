#include<stdio.h>

int main(){

    int i=0;
    char *msg = "hello world!";

forloop1:
    printf("%s\n", msg);
    if (i < 100){
        i++;
        goto forloop1;
    }

    return 0;
}


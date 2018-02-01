#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char buffer[255];
    strcpy(buffer, "Hello world!");
    printf("%s\n", buffer);
    free(buffer); // freeing something on the stack yields undefined behavior
    // https://stackoverflow.com/questions/2693655/free-on-stack-memory

    return 0;
}

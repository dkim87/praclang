#include<stdio.h>
#include "print_bitn.h"
#include<string.h>

int main(){
    char *a = "hello world! arnsetioarsars anresit oarnsetio anreso";
    char *b = "hello world! arnsetioarsars anresit oarnsetio anreso";
    char *c = "hello world! arnsetioarsars anresit oarnsetio anreso";

    //print_bitn(a, strlen(a));
    print_bitn(a, 200000);



    return 0;
}

#include<stdio.h>
#include<string.h>

int main(){

    char* test = "Hello my name is Kim";

    int len = strlen(test);

    printf("%d\n",len);

    char test2[]= "Hello my name is Kim";

    int len2 = strlen(test2);

    printf("%d\n",len2);

    return 0;
}



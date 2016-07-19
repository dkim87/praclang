#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *test=malloc(sizeof(char)*256);

    strcpy(test,"hello! my name is Kim!");

    char src[]="hello! my name is Kim!";
    //21 characters, but not sure

    char *test2=malloc(sizeof(src));
    strcpy(test2,src);

    printf("sizeof(src)=%d\n",sizeof(src));

    char *test3=malloc(strlen(src));
    strcpy(test3,src);

    printf("strlen(src)=%d\n",strlen(src));

    char *test4=malloc(sizeof(char)+1);
    scanf("%s",test4);

    printf("%s\n",test4);

    return 0;

}


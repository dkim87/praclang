#include<stdio.h>

int myStrlen(char[]);

int main(){

    char* test="this is \na test";

    int len=0;
    len=myStrlen(test);

    printf("%s\n",test);
    printf("%d\n",len);
    printf("%d\n",myStrlen(test));
    return 0;
}

int myStrlen(char s[]){
    int i=0;
    while(s[i]!='\0')
        ++i;

    return i;
}




#include<stdio.h>

int main(){

    int a=0;
    char c=0;
    while((c=getchar())!=EOF){

        a++;

        if(a%2==0)
            putchar(c);

    }

    return 0;
}

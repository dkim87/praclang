#include<stdio.h>

int mymultiply(int,int);

int main(){

    int a=4;
    int b=5;

    printf("%d\n",a*b);

    int c= mymultiply(a,b);

    printf("%d\n",c);

    return 0;

}

int mymultiply(int a,int b){

    int i=0;
    int j=0;
    for(i=0;i<b;i++)
        j+=a;

    return j;

}



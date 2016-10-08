#include<stdio.h>

int mymodulo_recursive(int,int);
int mymodulo_while(int,int);

int main(){

    int a=412344567;
    int b=100;

    printf("a modulo b = %d\n", a%b);

    int c=-4567;
    int d=100;

    printf("c modulo d = %d\n", c%d);


    int f= mymodulo_while(a,b);
    printf("f=%d\n",f);

    int e= mymodulo_recursive(a,b);
    printf("e=%d\n",e);

    return 0;

}

int mymodulo_recursive(int a,int b){

    if (a<b){
        return a;
    }
    else{ 
        return mymodulo_recursive(a-b,b);
    }

}

int mymodulo_while(int a, int b){

    while(a>=b){
        a=a-b;
    }

    return a;
} 

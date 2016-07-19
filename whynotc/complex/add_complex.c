#include<stdio.h>

struct complex{
    int real,img;
};

int main(){

    struct complex a,b,c;

    printf("a=");
    scanf("%d",&a.real);
    scanf("%d",&a.img);

    printf("b=");
    scanf("%d",&b.real);
    scanf("%d",&b.img);

    c.real = a.real + b.real;
    c.img = a.img + b.img;

    if(c.img>=0)
        printf("Sum of two complex numbers = %d + %di\n",c.real,c.img);
    else
        printf("Sum of two complex numbers = %d%di\n",c.real,c.img);

    return 0;
}


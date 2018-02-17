#include<stdio.h>
double a,b;

int main(){
    scanf("%lf%lf",&a,&b);
    for(;a<=b+0.009;a+=0.01)
        printf("%.2lf ",a);}

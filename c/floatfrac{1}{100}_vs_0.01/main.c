#include<stdio.h>
#include<assert.h>

int main(){
    double a, b, c;
    a = 1.0/100;
    b = 0.01;
    c = 0.02/2;

    printf("%.20g\n", a); // same
    printf("%.20g\n", b); // same
    printf("%.20g\n", c); // same

    double d;
    d = 1.0/16;
    printf("%.20g\n", d);
    d = 1.0/32;
    printf("%.20g\n", d);
    d = 1.0/1024;
    printf("%.20g\n", d);
    d = 1.0/2048;
    printf("%.20g\n", d);

    d = 0.0;
    for(int i = 0; i<200; ++i){
        d += 0.01;
    }
    printf("%.20g\n", d);


    return 0;
}

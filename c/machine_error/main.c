#include<stdio.h>
int main(){
    printf("hello world!\n");

    { // mini scope for x, y, z
        float x = 1;
        float y = 1;
        float z = 9999;

        do{
            y /= 2;
            z = x+y;
            printf("z is %.20f\n", z);
        }while(z > 1);
        printf("the machine error is: %.20f\n", y);
    }

    { // mini scope for a, b, c
        double a = 1;
        double b = 1;
        double c = 9999;

        do{
            b /= 2;
            c = a+b;
            printf("c is %.20lf\n", c);
        }while(c > 1);
        printf("the machine error is: %.20lf\n", b);

        printf("%.20lf\n", c+b+b+b+b+b+b);
        // c is still c. no change
    }

    return 0;
}

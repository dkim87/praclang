#include<stdio.h>
#include<math.h>

int main(){

    //long double x=0;
    double x=0;
    printf("size of long double: %d\n", (int) sizeof(x));

    for (int i=0; i<100; i++) {
        printf("%lf\n", pow(x,x));
        x++;
    }

    printf("hello? %lf\n", pow(30,30));

    return 0;
}

#include<stdio.h>
#include<math.h>

int main(){
    //double x = pow(2, 30)-1;
    double x = 1073741823;
    printf("%d\n", x);
    double y = 0;

    int z = 0;
    while(y < x){
        y = x;
        x += 0.0000001;

        if(z == 100){
            printf("%lf\n", x);
            z = 0;
        }
        z++;
    }

    printf("%lf\n", x, y);

    return 0;
}

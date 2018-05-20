#include<stdio.h>

int main(){
    int i = 3;

    int j;
    j = - i++ * 5;

    printf("%d\n", i);
    printf("%d\n", j);

    // i = -i++*5;
    // warning: operation on 'i' may be undefined

    return 0;
}

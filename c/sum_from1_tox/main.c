#include<stdio.h>

int sumrange (int x);

int main(){


    for (int i=1; i<=30; i++) {
        printf("%d:\t%d\n", i, sumrange(i));
    }


    return 0;
}

int sumrange (int x){
    int res=0;

    for (int i=1; i<=x; i++) {
        res = res+i;
    }
    return res;
}

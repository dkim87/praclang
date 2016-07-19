#include<stdio.h>

int main(){

    int x,y,tmp;

    printf("Enter the value of x and y");
    scanf("%d%d", &x, &y);

    printf("Before Swapping \nx=%d\ny=%d\n",x,y);

    tmp=x;
    x=y;
    y=tmp;

    printf("After swapping \nx=%d\ny=%d\n",x,y);

    return 0;

}


#include<stdio.h>

void swtest(int);

int main(){

    char x[10];
    printf("write an integer");
    scanf("%s",x);
    char y[10];
    printf("write another integer");
    scanf("%s",y);
    int xx, yy;
    xx=atoi(x);
    yy=atoi(y);
    swtest(xx);
    swtest(yy);

    return 0;

}

void swtest(int x){

    switch(x){
	case 0:
	    printf("%d is 0",x);
	    break;
	case 1:
	    printf("%d is 1",x);
	    break;
	case 2:
	    printf("%d is else",x);
	    break;
	default:
	    printf("%d is default",x);
    }
    printf("\n");
}


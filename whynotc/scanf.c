#include<stdio.h>

int main(){

    int x = 0;

    do{

	scanf("%d",&x);

	printf("\n The value you inserted is: %d\n\n", x);
    }while(x != 100);

    return 0;
}


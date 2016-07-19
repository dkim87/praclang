#include<stdio.h>

int main(){

    int i,n,c,a=1;

    printf("Enter the number of rows of Floyd's triangle to print\n");
    scanf("%d",&n);

    for (i=1;i<=n; i++){
	for (c=1;c<=i;c++){
	    printf("%d\t",a);
	    a++;
	}
	printf("\n");
    }
    return 0;
}



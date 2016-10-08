#include<stdio.h>

int main(){

	int x;
	scanf("%d",&x);

	int a[x];
	printf("%d\n", x);
	printf("%d\n", &x);
	a[0] = 1;

	a[1] = 343;

	printf("%d %d",a[0], a[1]);
	printf("\n %d",sizeof(a));
	return 0;
}


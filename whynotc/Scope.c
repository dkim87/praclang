#include <stdio.h>

void add(int, int);

int x = 5; char z = 200;

int sum (int a, int b)
{
	int x = a + b;
	return x;
}
void main (void)
{
	char z = sum(5, 10);
	add(z, 3);
	printf("%d %d\n", x, z);
}

void add(int a, int b)
{
	x=a+b;
}


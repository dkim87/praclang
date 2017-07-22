#include <stdio.h>


int x = 3;

void display(int x)
{
	printf("%d\n", x);
}

int main()
{
	int x = 2;

	display(x);
	x = 5;
	display (x);
}


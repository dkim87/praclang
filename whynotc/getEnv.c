#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Path: %s\n", getenv("PATH"));
	printf("Home: %s\n", getenv("HOME"));
	printf("ROOT: %s\n", getenv("ROOT"));

	return(0);
}


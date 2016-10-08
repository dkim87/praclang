#include <stdio.h>

int main (int argc, char *argv[])
{
	int i, limit;

	printf("ENTER LIMIT: ");
	scanf("%d", &limit);

	for(i=0; i<limit; i++)
		printf("%d\n", i);
	
	return 0;
}


#include <stdio.h>

int main() {
	int c;
	printf("%d", EOF);
	printf("%d",(c = getchar()) != EOF) ;
	while ((c = getchar()) != EOF)
		putchar(c);
}


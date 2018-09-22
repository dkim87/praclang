#include <string.h>
#include <stdio.h>

void target()
{
	printf("OverFlow!\n");
}

int main(int argc, char** argv)
{
	char buf[16];
	strcpy(buf, argv[1]);
	printf("%s\n", buf);
    return 0;
}

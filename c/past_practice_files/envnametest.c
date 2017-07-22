#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    char *addr;
    if(argc < 2)
    {
	printf("Usage: %s <environment variable name ", argv[0]);
	return 0;
    }

    addr = getenv(argv[1]);
    if(addr ==NULL)
	printf("THE environment variable %s dosen't exist. ", argv[1]);
    else
	printf("%s is located at %p, and the value is : %s", argv[1],addr,addr);
    return 0;
} 

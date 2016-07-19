#include<stdio.h>

int rand(void);
void srand(unsigned int);

int main(){

    int i=rand();

    printf("%d\n",i);

    return 0;

}

int rand(void){
    next=next*1103515245 +12345;
    return (unsigned int)(next/65536)%32768;
}

void srand(unsigned int seed)
{
    next=seed;
}


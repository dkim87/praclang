#include<stdio.h>

typedef struct wow{
    int x;
    int y;
    int z;
}wow;

int main(int argc, char *argv[]){
    wow x = {1, 2, 3};
    printf("%lu\n", sizeof(x));

    wow *xp = &x;
    printf("%p %p\n", xp, xp+1);

    return 0;
}

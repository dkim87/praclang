#include<stdio.h>

void print_floyd(int);

int main()
{
    int n, i, c, a=1;

    printf("Input number of rows of Floyd's triangle to print\n");
    scanf("%d",&n);

    print_floyd(n);

    return 0;
}

void print_floyd(int n){
    static int row = 1, c= 0;
    int d;
    
    if(n<=0)
        return;

    for(d=1;d<=row;d++)
        printf("%d\t",++c);

    printf("\n");
    row++;

    print_floyd(--n);
}


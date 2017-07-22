#include<stdio.h>

int main(){
    int x = 5;
    printf("%ld\n", &x);

    int *px=0;
    scanf("%ld", (int *)&px);

    if (px == NULL)
        printf("px is null!\n");

    if (*px == x)
        printf("px is a pointer to x!\n");

    return 0;
}

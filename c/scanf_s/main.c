#include<stdio.h>

int main(){
    int x = 5;
    // gcc did not implement this function yet.
    scanf_s("%d", &x);
    printf("%d\n", x);

    return 0;
}

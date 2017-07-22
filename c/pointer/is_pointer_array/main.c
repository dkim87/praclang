#include<stdio.h>

void swap(int arr[]);

int main(){
    int arr1[] = {1, 2};
    swap(arr1);
    printf("%d %d\n", arr1[0], arr1[1]);

    int *p = &arr1[0];
    swap(p);
    printf("%d %d\n", arr1[0], arr1[1]);
    printf("%d %d\n", p[0], p[1]);
    printf("%d %d\n", *p, *(p+1));

    // works
    int x = 5;
    int *xp = &x;
    swap(xp);
    printf("%d %d\n", xp[0], xp[1]);

    return 0;
}

void swap(int arr[]){
    int t = arr[0];
    arr[0] = arr[1];
    arr[1] = t;
}

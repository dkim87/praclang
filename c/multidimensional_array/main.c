#include<stdio.h>
#include "debug.h"

int main(){
    int arr[][3] = {{1, 2, 3}, {4, 5 ,6}};
    printf("arr is %p\n", arr);
    printf("&arr[0] is %p\n", &arr[0]);
    printf("&arr[0][0] is %p\n", &arr[0][0]);

    printf("arr+1 is %p\n", arr+1);
    printf("&arr[1] is %p\n", &arr[1]);
    printf("&arr[1][0] is %p\n", &arr[1][0]);
    printf("&arr[0][1] is %p\n", &arr[0][1]);

    // int **pp = arr; // error
    int (*pa)[3] = arr;
    printf("sizeof pa : %lu\n", sizeof(pa));
    printf("sizeof *pa : %lu\n", sizeof(*pa));
    // sizeof(*pa) is 12 so that pa[i] is equal to *(pa+1)



    return 0;
}

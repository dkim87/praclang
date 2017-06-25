#include<stdio.h>
#include <stdlib.h>

typedef struct arrcontainer{
    int dump;
    int arr[];
}arrcontainer;

void printarray(int[], int);
void determine_len(int[]);
void determine_len_ac(arrcontainer ac);

int main(){
    int a[] = {1, 2, 3};
    arrcontainer ac={0};
    //ac.arr = {1,2,3,4,5}; does not work. This syntax can only be applied when initialied.
    //ac.arr = (int*)malloc(3); // does not work either.

    printarray(a, 5);
    printarray(ac.arr, 15);

    determine_len_ac(ac); // only works when ac.arr is not flexible.

    return 0;
}

Void determine_len(int a[]){
    printf("%lu\n", sizeof(a));
}

Void determine_len_ac(arrcontainer ac){
    printf("%lu\n", sizeof(ac.arr));
}

Void printarray(int arr[], int arrlen){
    for(int i=0; i<arrlen; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

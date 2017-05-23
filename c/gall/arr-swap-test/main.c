#include<stdio.h>

// this does not work
void swap(int a, int b){
    int t = a;
    a=b;
    b=t;
}

// this works for array
void swap2(int arr[], int index1, int index2){
    int t = arr[index1];
    arr[index1]=arr[index2];
    arr[index2]=t;
}

void swap3(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void printarr(int arr[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[3] = {1,3,2};
    printarr(arr,3);
    swap(arr[1], arr[2]);
    printarr(arr,3);
    swap2(arr, 1, 2);
    printarr(arr,3);
    swap3(&arr[1], &arr[2]);
    printarr(arr,3);
    return 0;
}

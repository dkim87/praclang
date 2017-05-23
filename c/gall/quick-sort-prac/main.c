#include <stdio.h>

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high]; // takes last element as pivot.
    int i = low; // 0
    for (int j = low; j <= high-1; j++){ // 0 to 6
        if(arr[j]<=pivot){ // if arr[j] is smaller than pivot, send to left
            swap(&arr[i], &arr[j]);
            i++; // i counts the number of elements that are not larger than pivot. Therefore, arr[i] is the pivot's position.
        }
    }
    swap(&arr[i], &arr[high]); // arr[i] must be the pivot's position.
    return i; // returns pivot's index. This is a fixed, determined, finalized value and must be excluded from further manipulation.
}

void quickSort(int arr[], int low, int high){ //initially 0 and n-1
    if(low<high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i ++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = { 10, 7, 8, 8, 9, 1, 5 };
    int n = sizeof(arr)/sizeof(arr[0]); // 7
    quickSort(arr, 0, n-1); // (arr, 0, 6)
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

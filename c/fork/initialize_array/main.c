#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

#define ARRMAX 100
void printarr(int arr[], size_t arrlen);
void incremental_arr(int arr[], int start, int end);

int main(){
    //int arr[ARRMAX];
    int *arr = (int *)malloc(ARRMAX * sizeof *arr);
    printarr(arr, ARRMAX);
    pid_t pid = fork();

    if(pid){ // parent
        incremental_arr(arr, 0, 50);
    }else if(!pid){ // child
        incremental_arr(arr, 50, 100);
    }

    wait(NULL);

    printarr(arr, ARRMAX);

    return 0;
}

void incremental_arr(int arr[], int start, int end){
    for (int i = start; i < end; i++){
        arr[i] = i;
    }
}

void printarr(int arr[], size_t arrlen){
    for (size_t i=0; i<arrlen; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }
}


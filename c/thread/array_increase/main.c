#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
void *inc_arr(void *input);
void print_arr(int arr[], int size);

typedef struct {
    int *arr;
    int low;
    int high;
}arr_wrapper;

void print_aw(arr_wrapper aw);

int main(){
    pthread_t threads[2];
    //int *arr = (int *)malloc(100 * sizeof *arr);
    int arr[100];
    arr_wrapper aw1 = {arr, 0, 50};
    arr_wrapper aw2 = {arr, 50, 100};

    pthread_create(threads, NULL, inc_arr, (void *)&aw1);
    pthread_create(threads+1, NULL, inc_arr, (void *)&aw2);
    /* must present. Otherwise print_arr prints 0, 0, 0, ... */
    pthread_join(threads[0], NULL);
    pthread_join(threads[1], NULL);

    print_arr(arr, 100);

    /*
    printf("pointer to thread %lu\n", sizeof(pthread_t));
    printf("pointer to pthread_t %lu\n", sizeof threads);
    printf("pointer to thread %lu\n", sizeof *threads);
    printf("thread %lu\n", sizeof **threads);
    */

    return 0;
}

void *inc_arr(void *input){
    arr_wrapper *paw = (arr_wrapper *)input;
    int *a = paw->arr;
    for (int i = paw->low; i < paw->high; i++){
        a[i] = i;
    }
    print_aw(*paw);
    return NULL;
}

void print_arr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }
}

void print_aw(arr_wrapper aw){
    printf("%p %p %p %p\n", &aw, aw.arr, &aw.low, &aw.high);
}

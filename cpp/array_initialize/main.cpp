#include <iostream>
using namespace std;

void print_arr(int arr[], int arrlen){
    printf("arr: ");
    for(int i = 0; i<arrlen; ++i){
        printf("%d-", arr[i]);
    }
    puts("");
}

int main(){
    // seems like this does not work as assumed. It just initializes the missing values as 0.
    // well, at least I don't need memset.
    int arr[10] = {1,};
    print_arr(arr, 10);

    return 0;
}

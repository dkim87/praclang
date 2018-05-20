#include<stdio.h>

void print_arr_char(char* arr, size_t sz){
    for(size_t i = 0; i < sz; ++i){
        printf("%lu\t: %d\t: %c\n",i, arr[i], arr[i]);
    }
    printf("\n");
}

int main(void){
    //char hey[10] = "hello"; // works
    //char hey[10] = {"hey"}; // also works
    // char hey[10] = {"helloworld"}; no null
    //char hey[10] = "helloworld"; // no null
    //char hey[] = {"helloworld"}; // works, sizeof 11
    char hey[] = "helloworld"; // works, sizeof 11

    print_arr_char(hey, sizeof(hey));

    return 0;
}

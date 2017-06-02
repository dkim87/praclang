#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main(void){
    time_t current_time;
    char* c_time_string;
    int counter = 0;

    while(1){
    current_time = time(NULL);

    if (current_time == ((time_t)-1)){
        fprintf(stderr, "Failure to obtain\n");
        exit(EXIT_FAILURE);
    }

    c_time_string = ctime(&current_time);

    if (c_time_string == NULL){
        fprintf(stderr, "Failure to convert\n");
        exit(EXIT_FAILURE);
    }

    printf("Current time is %s\n", c_time_string);
    printf("%d\n", counter++);
    }
    return 0;
}

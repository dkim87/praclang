#include<stdio.h>

#define repeat(n)\
    for(int i = 0; i < n; i++)

void hey(){
    printf("wow\n");
}

int main(void){
    /*
    struct timeval t;
    printf("%lu\n", sizeof t);

    int rc = gettimeofday(&t, NULL);
    assert(rc == 0);

    int sum = 0;

    printf("done!\n");
    */

    printf("hello world!\n");
    hey();

    repeat(5){
        hey();
    }




    return 0;
}

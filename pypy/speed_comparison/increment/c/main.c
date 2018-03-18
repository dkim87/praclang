#include<stdio.h>

int main(){
    for(size_t i = 0; i<100000000; i++){
        //if (i % 100000000 == 0)
        if (!(i % 10000000))
            printf("%u\n", i);
    }
    return 0;
}

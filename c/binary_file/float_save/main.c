#include<stdio.h>
//#include <stdlib.h>

int main(void){
    FILE *my_file = fopen("pi.bin", "w");
    float x = 3.1415;
    fwrite(&x, sizeof x, 1, my_file);

    return 0;
}

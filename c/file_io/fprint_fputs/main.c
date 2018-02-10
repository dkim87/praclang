#include<stdio.h>
#include "debug.h"
// tutorialspoint example

int main(){

    FILE *fp;
    fp = fopen("/tmp/test.txt", "w+");
    debug((void*)fp);
    fprintf(fp, "This is testing for fprintf...\n");
    debug((void*)fp);
    fputs("This is testing for fputs...\n", fp);
    debug((void*)fp);



    return 0;
}

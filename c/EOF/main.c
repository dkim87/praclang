#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){

    char ibuff[255];
    char* x;

    /*
    // this went for infinite loop when ctrl+D or EOF provided.
    // It seems that once EOF is provided, gets fail over and over. (it does not give a second chance.)
    // therefore need a way to control for this.
    for(;;){
        gets(ibuff);
        if(!strcmp(ibuff, "/q"))
            exit(424);
        puts(ibuff);
    }
    */

    for(;;){
        x = gets(ibuff);
        if (x == NULL){
            printf("met EOF before reading any chars.\n");
            exit(242);
        }
        if (!strcmp(ibuff, "/q")){
            printf("quitting!");
            exit(424);
        }
        puts(ibuff);
    }

    return 0;
}


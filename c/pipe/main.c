#include<stdio.h>
#include<stdlib.h>
// #define BLOCK_SIZE 30
#define BLOCK_SIZE 512
#define MAX_STR_LEN 4096
#define A 0
#define B 0

int main(){
    #if A
    //char line [5];
    char line[4096];
    while(fgets(line, sizeof(line), stdin) != 0){ // copy line by line, including the new line char.
        // if no pipe, read from user, line by line.
        printf("this is the first approach.\n");
        printf("%s", line);
    }
    #elif B
    char buffer[BLOCK_SIZE];
    fread (buffer, sizeof(char), BLOCK_SIZE, stdin); // copy the whole chuck
    // if no pipe, read from user, by buffer.
    printf("this is the second approach.\n");
    printf("%s", buffer);
    #else
    char str_from_file[MAX_STR_LEN];
    while(fscanf(stdin, "%s", str_from_file)==1){ // copy word by word, excluding the new line char.
        // if no pipe, read from user, word by word
        //printf("this is the third approach.\n");
        printf("%s\n", str_from_file);
        //printf("%s", str_from_file);
    }
    #endif

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int quit = 0;
int wcnt = 0;
# define LARGE 256
char ibuf[LARGE]={0};
char obuf[23]=":regional_indicator_?:";

void prepare_ibuf(int argc, char** argv){
    int lpcnt = 1;
    while(lpcnt<argc){
        strcpy(ibuf+wcnt, argv[lpcnt]);
        wcnt+=strlen(argv[lpcnt]);
        ++lpcnt;
    }
}

void modify_obuf(){
    int lpcnt = 0;
    char c = 0;
    while(lpcnt < wcnt){
        c = ibuf[lpcnt];
        if (c != '\n' && c != ' ' && c != '\t'){
            obuf[20] = c;
            printf("%s ", obuf);
        }
        ++lpcnt;
    }
}

void check_quit(){
    if(!strcmp(ibuf, "/q")){
        printf("program ends\n");
        exit(0);
    }
}

void receive_input(){
    printf(">");
    /*
    gets(ibuf);
    */
    fgets(ibuf, LARGE, stdin);
    check_quit();
    wcnt=strlen(ibuf);
}

int main(int argc, char** argv){
    printf("stdin is %p\n", stdin);
    if(argc > 1){
        prepare_ibuf(argc, argv);
        modify_obuf();
    }else{
        for(;;){
        receive_input();
        modify_obuf();
        puts("");
        }
    }
    return 0;
}

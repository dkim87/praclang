#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int prepare_ibuf(char* ibuf, int argc, char** argv){
    int wcnt = 0;
    int lpcnt = 1;
    while(lpcnt<argc){
        strcpy(ibuf+wcnt, argv[lpcnt]);
        wcnt+=strlen(argv[lpcnt]);
        ++lpcnt;
    }
    return wcnt;
}

void modify_obuf(char *obuf, char *ibuf, int wcnt){
    int lpcnt = 0;
    while(lpcnt < wcnt){
        obuf[20] = ibuf[lpcnt];
        printf("%s ", obuf);
        ++lpcnt;
    }
}

void check_quit(char *ibuf){
    if(!strcmp(ibuf, "/q")){
        printf("program ends\n");
        exit(0);
    }
}

int receive_input(char *ibuf){
    printf(">");
    gets(ibuf);
    check_quit(ibuf);
    return strlen(ibuf); // return wcnt
}

int quit = 0;
int main(int argc, char** argv){
    int wcnt = 0;
    char ibuf[31]={0};
    char obuf[23]=":regional_indicator_?:";

    if(argc > 1){
        wcnt = prepare_ibuf(ibuf, argc, argv);
        modify_obuf(obuf, ibuf, wcnt);
    }else{
        for(;;){
            wcnt = receive_input(ibuf);
            modify_obuf(obuf, ibuf, wcnt);
            puts("");
        }
    }
    return 0;
}


#include <stdio.h>
#include <string.h>

char ibuf[31]={0};
char obuf[23]=":regional_indicator_?:";

int main(int argc, char** argv)
{
    int lpcnt=1;
    int wcnt=0;
    if(argc==1){
restart:;
        printf(">");
        gets(ibuf);
        if(!strcmp(ibuf, "/q"))
        {
            puts("program ends.");
            return 0;
        }
        wcnt=strlen(ibuf);
    }
    else{
        while(lpcnt<argc)
        {
            strcpy(ibuf+wcnt, argv[lpcnt]);
            wcnt+=strlen(argv[lpcnt]);
            ++lpcnt;
        }
    }
    lpcnt=0;
    while(lpcnt<wcnt)
    {
        obuf[20]=ibuf[lpcnt];
        printf("%s ", obuf);
        ++lpcnt;
    }
    if(argc==1){
        printf("\n");
        goto restart;
    }
    return 0;
}

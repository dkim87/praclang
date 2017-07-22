#include<stdio.h>
#define KOREA "Korea"

char *my_strcpy(char *dest, const char *src);

int main(){
    char string[100];

    char *pchar = (char *)NULL;

    my_strcpy( string, (const char *) KOREA );
    puts(string);
    my_strcpy( pchar, KOREA );


    return 0;
}

char *my_strcpy(char *dest, const char *src){
    if(dest == (int)NULL || src == (int)NULL){
        if (*dest != (int) NULL ) *dest = (int) NULL;
        return NULL;
    }

    do{
        *dest++ = *src;
    }while( *src++ != (int)NULL);

    return dest;
}

#include<stdio.h>

int main(int argc, char *argv[]){
    char c=getchar();
    while(c!=EOF){
        if (c == 10){
            printf("enter pressed!\r\n");
            c = getchar();
            continue;
        }
        printf("c is %c!\r\n", c);
        c = getchar();
    }

    return 0;
}

#include <string.h>
#include<stdio.h>

int strindex(char*, char*);
int main(){
    
    char *string = "hello world! wou woul would how are would hello wou thest ";
    char *pattern = "ould";

    int position = 0;
    position = strindex(string,pattern);
    printf("%d\n", position);
    printf("%c\n",string[position]);

    return 0;
}

int strindex(char *s, char *t){
    int sindex = strlen(s)-1;
    int tindex = strlen(t)-1;
    for(;sindex>=0;sindex--){
        int j = sindex;
        int k = tindex;
        for(;s[j]==t[k];j--,k--){
            if(k==0){
                return sindex-strlen(t)+1;
            }
        }
    }
    return -1;
}

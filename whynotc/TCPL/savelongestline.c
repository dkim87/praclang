#include<stdio.h>
#define MAXLINE 1000

//from char line[], getting the max line. Review requied
int mygetline(char line[], int maxline);

//copies a line (char array) to another line (another char array)
void copy(char to[], char from[]);

int main(){
    //length
    int len;
    //maxth line is the longest
    int max;
    //read line and store it
    char line[MAXLINE];
    //store the logest 
    char longest[MAXLINE];
    //initialize it to 0. Starting from 0.
    max=0;
    //while len > 0, which means it will be decreasing? 
    //len is the length of a line, i guess?
    while((len=mygetline(line,MAXLINE))>0)
        if (len>max){
            max=len;
            copy(longest, line);
        }
    if (max>0)
        printf("%s", longest);
    return 0;
}

//getting char s[] as a line
int mygetline(char s[], int lim){
    int c,i;
    for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';++i)
        s[i]=c;
    if(c=='\n'){
        s[i]=c;
        ++i;
    }
    s[i]='\0';
    return i;
}

void copy(char to[], char from[]){
    int i;
    i=0;
    while((to[i]=from[i])!='\0')
        ++i;
}



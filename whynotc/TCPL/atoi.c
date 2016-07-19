#include<stdio.h>

int myatoi(char[]);

int main(){

    char a[]="1";
    char b[]="3";
    char c[]="2";

    int x,y,z;

    x=myatoi(a);
    y=myatoi(b);
    z=myatoi(c);

    printf("%s %s %s\n",a,b,c);
    printf("%d %d %d\n",x,y,z);
    
    return 0;
}

int myatoi(char s[]){
    int i,n;
    n=0;
    for(i=0;s[i]>='0'&&s[i]<='9';++i)
        n=10*n+(s[i]-'0');
    return n;
}


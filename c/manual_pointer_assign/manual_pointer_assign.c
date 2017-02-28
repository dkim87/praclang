#include<stdio.h>
int main(){
    char x = 5;
    char* p = (char *)&x;
    printf("%d\n",*p);
    printf("%d\n",*p);
    
    return 0;
}

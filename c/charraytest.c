#include<stdio.h>

int main(){
    
    char uinput[20];
    char *uinputp=uinput;
    
    scanf("%s",uinput);
    
    printf("%s",uinput);
    printf("\n"); 
    printf("%p",uinput);
    printf("\n"); 
    printf("%d\n",uinput);
    printf("%d\n",&uinput);



    printf("%d",uinputp);
    printf("\n"); 
    printf("%s",*uinputp);
    printf("\n"); 
    printf("%p",uinputp);
    printf("\n"); 

}

#include<stdio.h>

# define iprint(expr) printf(#expr " = %d\n", expr)

int main(){
    int hello = 5;
    iprint(hello);

    printf("hello" " = %d\n", hello);
    printf("hello"" = %d\n", hello);

    const char * name = "hello";
    
    return 0;
}

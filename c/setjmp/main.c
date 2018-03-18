#include<stdio.h>
#include<setjmp.h>

int stack[2048];
int *sp=stack;
jmp_buf ip;
int r1, r2, r3, r4;


int main(){
    int a = 5; int b = 6;
    int c;
    if (setjmp(ip)==0){
        *sp=a; sp++; goto add1;
    } a = r1;

    if (0 == setjmp(ip)){
        *sp=a; sp++; *sp=b; sp++; goto add_x_y;
    } c = r1;

    printf("%d\n", a);

    printf("%d\n", c);

    return 0;

add1:
    sp--;
    r1 = *sp;
    r1++;
    longjmp(ip,1);

add_x_y:
    sp--;
    r1 = *sp;
    sp--;
    r2 = *sp;
    r1 = r1 + r2;
    longjmp(ip,1);
}

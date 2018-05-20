#include<stdio.h>
 int main()
{
    int num1,num2,p,x;
    scanf("%d%c%d",&num1,&x,&num2);
    if(x == 'A') p = num1+num2;
    printf("\n%d %d %d",num1,x,num2);
    return 0;
}

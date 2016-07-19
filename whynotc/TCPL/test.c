#include<stdio.h>
#include<math.h>

int main(){

    unsigned long int a;
    unsigned long int b=pow(2,32);

    a=(b+1)*(b-1);

    printf("%lu\n",a);
    printf("%lu\n",a+1);
    
    long long c = a+1;
    printf("%llu\n",c);
    printf("%llu\n",c+1);
    

    return 0;
}


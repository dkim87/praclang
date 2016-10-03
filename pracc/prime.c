#include <stdio.h>

int is_prime();
void may_prime();

int main(){
    int testnum = 100;
    int primetest[testnum];

    int i = 0;
    for (i = 0; i<testnum; i++){
        primetest[i]=0;
    }
    i = 0;
    for (i = 0; i<testnum; i++){
        primetest[i]=is_prime(i);
    }
    i = 0;
    for (i = 0; i<testnum; i++){
        printf("%d is prime? %d\n",i, primetest[i]);
    }
    return 0;
}

int is_prime(int x){
    if(x==0 || x==1)
        return 0;
    int retval = 1;
    int i=0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            retval = 0;
        }
    }
    
    return retval;
}


void may_prime(){
    int z;
    for(int i=2;i<100;i++){
        for (z=2; z<i; z++){
            if(i%z==0){
                break;
            }
        }
        printf("%d ",z);
    }
}


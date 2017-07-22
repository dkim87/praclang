
#include<stdio.h>

int power(int, int);
int isArmstrong(int);

int main(){
    
    int max=0;
    printf("Tell us the maximum number for the computation.\n");
    scanf("%d",&max);
    
    int i=0;

    for(i=0;i<=max;i++){
	if(isArmstrong(i)){
	    printf("%d \n",i);
	}
		
    }

    return 0;
}

int isArmstrong(int n){
    
    int sum=0, temp, remainder, digits = 0;
    
    temp = n;
    //Count number of digits
    while (temp != 0) {
	digits ++;
	temp = temp/10;
    }

    temp = n;

    while (temp != 0) {
	remainder = temp%10;
	sum = sum+power(remainder, digits);
	temp=temp/10;
    }

    if(n==sum){
	return 1;
    }
    else{
	return 0;
    }


    

}

int power(int n, int r) {
    int c, p = 1;

    for (c=1; c <= r; c++)
	p=p*n;

    return p;
}


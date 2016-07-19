#include<stdio.h>

int main(){

    int size[10];
    
    size[1]=sizeof(int);
    size[2]=sizeof(char);
    size[3]=sizeof(int*);
    size[4]=sizeof(char*);
    size[5]=sizeof(float);
    size[6]=sizeof(long long);
    size[7]=sizeof(double);
    size[8]=sizeof(long int);
    size[9]=sizeof(size);

    int i;

    int arraylength=sizeof(size)/sizeof(size[0]);
    for(i=0;i<arraylength;i++){
	printf("%d\n",size[i]);
    }

}

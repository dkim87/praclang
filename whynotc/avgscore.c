#include<stdio.h>

int main(){
    int repeat,c,i,j,average,sum,k;
    float output;

    scanf("%d ",&repeat);

    sum = 0;
    k=0;

    for(j=0;j<repeat;j++){

	for (i=0;i<c;i++){
	    
	    scanf("%d",&N[i]);
	    sum+=N[i];
	}

	average=sum/c;

	for (i=0;i<c;i++){
	    if(N[i]>average){
		k++;
	    }

	}

	output=(float)k/(float)c;
	printf("%.3f%%",output*100);
    }

    return 0;
}


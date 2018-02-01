// This is to test whether two vars can extend the repetition if a for loop iteration limit is set.
// Yes it can.
// However, I'm not sure if i is determined at the beginning of the for loop and is not tested every time of iteration.
// In MATLAB, i is fixed to 10000 no matter what happens with j.
#include<stdio.h>

int main(){

    short i = 0;
    short j = 0;
    long int count = 0;

    for (i=0;i<10000;i++){
        count++;
        printf("this is %ldth line\n",count);
        if (i==9999){
            j++;
            i=-1;
        }
        if (j==100){
            printf("finished!\n");
            break;
        }
    }

    return 0;
}



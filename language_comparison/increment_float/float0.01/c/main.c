#include<stdio.h>
#include<assert.h>

// var a container
double arr[256];
size_t idx=0;

void print_arr(double arr[],size_t size){
    for (size_t i = 0; i < size; ++i) {
        printf("%g / ", arr[i]);
    }
    printf("\n");
}

int main(){
    double a = -3;
    double b = 3;
    double a_save = a-0.01;
    double diff = a - a_save;
    double old_diff;
    double didiff = 0;
    int i = 1;
    //for(int i = 1; (int)a <= b; a+=0.01, ++i ){ // 201th trial (cuz (int)2.99 = 2)
    //for(int i = 1; a <= b; a+=0.01, ++i ){ // 100th trial
    //for(int i = 1, b=3; a <= b; a+=0.01, ++i ){ // 201th trial
    //for(int i = 1; (int)(100*a) <=(int)(100*b); a+=0.01, ++i ){ // 101th trial // solved!
    for(i = 1; a <= b; a+=0.01, ++i ){ // 201th trial
    /*
    a = 2, b=3;
    for(int i = 1; (int)(100*a) <=(int)(100*b); a+=0.01, ++i ){ // 101th trial // solved!
    //*/
        // printf("%d\t th trial:\t %.20g\n", i, a);


        old_diff = diff;
        diff = a - a_save; // new diff
        didiff = diff - old_diff; // should be zero
        //printf("%.20g\n", diff);
        //printf("%.20g\n", didiff);

        //assert(didiff == 0); // at 102th trial, assertion fail

        if (didiff){ // if didiff is not 0
            printf("diff changed!\t");
            printf("trial is %d, a is %g\n", i, a);
            printf("old_diff : %20.16g\t new_diff : %20.16g\t", old_diff, diff);
            printf("diff_of_diff : %.16g\n", didiff);

            // add a to arr
            arr[idx] = a;
            idx++;

        }


        a_save = a;
    }

    print_arr(arr, idx);

    return 0;
}


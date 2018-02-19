#include<stdio.h>
#include<assert.h>
int main(){
    double a = 1, b = 2;
    double a_save = a-0.01;
    double diff = a - a_save;
    double didiff = 0;
    //for(int i = 1; (int)a <= b; a+=0.01, ++i ){ // 201th trial (cuz (int)2.99 = 2)
    //for(int i = 1; a <= b; a+=0.01, ++i ){ // 100th trial
    //for(int i = 1, b=3; a <= b; a+=0.01, ++i ){ // 201th trial
    //for(int i = 1; (int)(100*a) <=(int)(100*b); a+=0.01, ++i ){ // 101th trial // solved!
    for(int i = 1, b=3; i < 105; a+=0.01, ++i ){ // 201th trial
        printf("%d\t th trial:\t %.20g\n", i, a);

        didiff = diff; // save old diff
        diff = a - a_save; // new diff
        didiff = diff - didiff; // should be zero
        printf("%.20g\n", diff);
        printf("%.20g\n", didiff);
        //assert(didiff == 0); // at 102th trial, assertion fail


        a_save = a;
    }

    return 0;
}

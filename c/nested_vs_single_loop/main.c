#include<stdio.h>
#include<time.h>
#define N 100

double mean(double arr[], int size){
    double sum = 0;
    for (int i = 0; i<size; i++)
        sum += arr[i];
    return sum / (double)size;
}

void forloop(int limit){
    int sum = 0;
    int i,j,k;

    for (k=0; k< limit; k++)
        for (j=0; j< limit; j++)
            for (i=0; i< limit; i++)
                sum += i + j + k;
}

void whileloop(int limit){
    int sum = 0;
    int i,j,k;
    i = j = k = 0;

    while(k< limit){
        sum += i + j + k;

        i++;
        if(i == limit){
            j++; i=0;
        }
        if(j == limit){
            k++; j=0;
        }
    }
}

int main(){
    int limit = 200; // i, j, and k have values from 0 to 199
    // therefore, 200 * 200 * 200 = 8,000,000 loop per trial


    // store elapse time per trial
    double clocks_for[N];
    double clocks_while[N];

    int index = 0;
    // N is a constant of value 100
    // therefore, 100 trials
    while(index < N){

        clock_t start, end;

        start = clock();
        forloop(limit);
        end = clock();
        double clock_forloop = (double)(end - start)/CLOCKS_PER_SEC;

        start = clock();
        whileloop(limit);
        end = clock();
        double clock_whileloop = (double)(end - start)/CLOCKS_PER_SEC;

        printf("%dth\t trial --- elapse time: %f vs. %f\n", index+1, clock_forloop, clock_whileloop);

        clocks_for[index] = clock_forloop;
        clocks_while[index] = clock_whileloop;
        index++;

    }

    double mean_for = mean(clocks_for, N);
    double mean_while = mean(clocks_while, N);
    printf("%d average:  %f vs. %f \n", N, mean_for, mean_while);

    mean_for > mean_while ? printf("winner is while!\n") : printf("winner is for!\n");

    printf("for is %f percent faster than while.\n", (mean_while/mean_for -1) * 100);

    return 0;
}

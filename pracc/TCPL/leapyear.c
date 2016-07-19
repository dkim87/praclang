#include<stdio.h>

int main(){

    int year = 2015;

    for (year=0;year<2100;year++){

        if((year%4==0&&year%100!=0)||year%400==0)
            printf("%d is a leap year\n",year);
        else
            printf("%d is not a leap year\n",year);
        
    }

    return 0;

}



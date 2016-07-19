#include<stdio.h>
#include<stdlib.h>


typedef struct review{
    int num;
    char roomName[50];
    int time;
}review;

review comp = {30, "Leacock", 1800};

struct review2 {
    int numb;
    char roomName2[50];
    int time;
}review2;


int main(){
    review comp={30,"Leacock", 1800};
    review* math=(review*)malloc(3*sizeof(review));
    //*math={40,"Math223", 1100};
    
    printf("%d %s %d",comp.num,comp.roomName,comp.time);
    return 0;
}



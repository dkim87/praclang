#include<stdio.h>

typedef struct book{
    int x;
    int y;
}mybook;

void swap(mybook obj){
    int t = obj.x;
    obj.x = obj.y;
    obj.y = t;
}

void swapii(int a, int b){
    int t = a;
    a = b;
    b = t;
}

void printinfo(mybook obj){
    printf("%d %d\n",obj.x, obj.y);
}

int main(){
    mybook bk1={2,3};
    mybook bk2={4,5};

    swap(bk1);
    printinfo(bk1);

    swapii(bk1.x, bk1.y);
    printinfo(bk1);

return 0;
}

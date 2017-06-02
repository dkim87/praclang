#include<stdio.h>

typedef struct book{
    int x;
    int y;
}book;

void info_book(book x){
    printf("%d %d\n", x.x, x.y);
}

void swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swap(book *a, book *b){
    *a = *a ^ *b;
}

int main(){

    int x = 5;
    int y = 6;
    swap(&x, &y);
    printf("%d %d\n", x,y);

    book myb = {1,2};
    book myb2 = {3, 4};
    info_book(myb);
    info_book(myb2);

    return 0;
}

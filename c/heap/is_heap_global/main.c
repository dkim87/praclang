#include<stdio.h>
#include<stdlib.h>


typedef struct book{
    char *title;
    char *author;
    int pages;
}book;

void is_global();
void print_info(book *);

book *mybook;

int main(){
    mybook = (book *)malloc(sizeof(book));
    is_global();
    print_info(mybook);

    free(mybook);
    int mybook=3;
    printf("%d\n", mybook);
    //print_info(mybook);


    return 0;
}

void is_global(){
    *mybook = (book){"hello", "world", 3};
}

void print_info(book *mybook){
    printf("%s %s %d\n", mybook->title, mybook->author, mybook->pages);
}

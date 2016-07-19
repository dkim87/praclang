#include<stdio.h>
#include<stdlib.h>

typedef struct _NODE{
    int data;
    struct _NODE* next;
}NODE;

int main(){
    NODE* New;

    printf("%p\n",&New);
    printf("%p\n", New);
    
    int i=0;
    for (i=0; i<5;i++){
	New=(NODE*)malloc(sizeof(NODE));
	printf("%p\n",&New);
	printf("%p\n", New);
	free(New);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>

int main(){
    printf("test1\n");
    char* test1 = "Hello my name is Kim";
    printf("%lu\n",strlen(test1));
    printf("%lu\n",sizeof(test1));

    printf("test2\n");
    char test2[]= "Hello my name is Kim";
    printf("%lu\n",strlen(test2)); // 20
    printf("%lu\n",sizeof(test2)); // 21

    printf("test3\n");
    char test3[30]= "Hello my name is Kim";
    printf("%lu\n",strlen(test3));
    printf("%lu\n",sizeof(test3));

    printf("test4\n");
    char test4[20]= "Hello my name is Kim";
    printf("%s hello\n", test4);
    printf("%lu\n",strlen(test4)); // 20
    printf("%lu\n",sizeof(test4)); // 30

    return 0;
}



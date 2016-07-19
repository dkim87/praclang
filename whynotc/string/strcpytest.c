#include<stdio.h>
#include<string.h>

/*the objective of this test is to examine if
    - arr can store space identifier
    - printf can print space separated string
    - arr2 can be written with internal assignment.
    - chap, chap2 can be assigned using strcpy
    - arr2 can be overwritten with arr, and then the full 100 space would be copied
    - arr can be overwritten with arr2, which is 200
  */

int main(){

    char arr[100], arr2[200], *chap, *chap2;
    memset(arr, '\1',sizeof(arr));
    memset(arr2, '\0',sizeof(arr2));

    scanf("%s", arr);

    printf("%s\n",arr);

    //*arr2="Hello my name is Hwang!\n";
    strcpy(arr2,"Hello my name is Hwang!\n");

    printf("%s \n",arr2);
 
    strcpy(chap, arr);

    strcpy(chap2, arr2);

    strcpy(arr2,arr);

    strcpy(arr,arr2);

    printf("Done! Happy debugging!");

    return 0;

}

    

    

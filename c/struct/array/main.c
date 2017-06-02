#include<stdio.h>

typedef struct person{
    int age;
    int day;
}People[2];
// Now People is an array object containing two person object.
/*
Don't get confused. If someone does
People myPeople[2];
This means there are two People objects each containing two person objects.
If you want to access the age of the first person object, the syntax must be
myPeople[0][0].age = 5;
*/

void printall(People x){
    for (unsigned i=0; i < sizeof(People)/sizeof(struct person); i++){
        printf("%d\n%d\n", x[i].age, x[i].day);
    }
}


int main(){

    People a = {{1,2},{3,4}};
    printall(a);

    return 0;
}


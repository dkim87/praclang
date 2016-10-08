

#include<stdio.h>
#include<stdlib.h>

struct people {
    char name[100];
    int age;
};

int main(void)
{
    struct people *p=NULL;
    int numOfPeople, i;

    //Ask the user for the number of people

    printf("No of people? : ");
    scanf("%d", &numOfPeople);
    p = (struct people*)calloc(numOfPeople,sizeof(struct people));
    if (p==NULL) return 1;

    //Fill in every cell with people information

    for(i=0;i<numOfPeople; i++){
	printf("Name: ");
	scanf("%s",*(p+i)->name);
	char garbage[5];
	scanf("%s",garbage);
	printf("Age: ");
	scanf("%d",(p+i)->age);
    }
    return EXIT_SUCCESS;
}


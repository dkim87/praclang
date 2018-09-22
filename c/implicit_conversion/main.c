#include<stdio.h>
int main(){
    int a[3] = {2, 4, 6};

    printf("%d\n", a[0]);
    printf("%p\n", a); // a is an implicitedly-converted pointer to int
    printf("%p\n", a+1); // incremented by 4
    printf("%p\n", &a); // &a is a pointer to a[10], i.e. (*)[3], or pointer to array of size 3
    printf("%lu\n", sizeof(*a)); // size is 4, as int
    printf("%lu\n", sizeof(*(&a))); // size is 12, as int[3]
    printf("%d\n", *a); // 2
    printf("%d\n", *a+1); // 3
    printf("%d\n", *(a+1)); // 4
    printf("%d\n", *(&a)); // this does not work
    printf("%x\n", *a); // *a in hex value
    printf("%x\n", *(&a)); // *(%a) in hex value and it is the address of the first element of the array.
    printf("%x\n", **(&a)); // now it gives 2
    printf("%d\n", *((int *)&a)); // making this from int[] pointer to int pointer, now it works
    printf("%d\n", *((int *)&a+1));

    printf("%p == %p\n", a, &a[0]);
    printf("%lu != %lu\n", sizeof a, sizeof &a[0]);


    return 0;
}

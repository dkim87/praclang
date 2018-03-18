// https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in

#include <iostream>
#include <assert.h>
using namespace std;

int main(){
    int x = 0;
    int &r = x;
    int *p = &x;
    int *p2 = &r;

    printf("%p %p\n", p, p2);
    printf("%d\n", p == p2);
    assert( p == p2 );

    return 0;
}

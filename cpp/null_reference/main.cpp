#include <iostream>
using namespace std;

int main(){
    int x = *(int *)0;
    printf("%d\n", x);

    int xr = *(int *)0;

    printf("%d\n", xr);

    return 0;
}

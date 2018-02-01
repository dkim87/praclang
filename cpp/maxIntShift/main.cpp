#include <iostream>
using namespace std;

int main(){
    int i = (1 << 31) - 1;
    unsigned int j = (1 << 31);

    i = 1 << 31 - 1;
    printf("%d\n", i);
    printf("%u\n", j);
    j = (j << 1);
    printf("%u\n", j);
    int i = (1 << 32)-1;
    j = (j << 1);
    printf("%u\n", j);

    return 0;
}

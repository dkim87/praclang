#include<cstdio>
#include <cmath>

using namespace std;

int i, j, c=0;

int main(){

    c || (scanf("%d", &c), i = j = c);
    int v = i - abs(j);
    printf("%c ", (v<0) ? ' ' : (v + '0'));
    return (i<0)?0 : (i+j) ? (--j, main()) : (printf("\n"), j = c, --i, main());
}

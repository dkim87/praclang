// https://www.codentalks.com/t/topic/3304

#include <stdio.h>

void test(int p1, int p2, int p3)
{
    printf("%d %d %d\n", p1, p2, p3);
}

int main(){
    int k = 10;

    test(k, ++k, k);
    test(k, k++, k);
    return 0;
}

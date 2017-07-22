#include<stdio.h>

int main(){
    unsigned long long x = 0;
    unsigned long long res = 1;
    unsigned long long i;
    unsigned long long j;
    unsigned long long upto=20;
    printf("hello %lu\n", sizeof(unsigned long long));
    goto start;
factorial:
    i = 0;
forloop1:
    i++;
    res = res * i;
    if(i >= x)
        goto forloop1end;
    goto forloop1;
forloop1end:
    goto _factorial;
start:
    j=-1;
forloop2:
    j++;
    x = j;
    res = 1;
    goto factorial;
_factorial:
    printf("%llu! = %llu\n", x, res);
    if (j>upto)
        goto end;
    goto forloop2;
end:
    return 0;
}


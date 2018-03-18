#include<stdio.h>
int main(){
    int x = 1 + '2';

    printf("%d\n", x); // 51

    int y = ' ' ^ "ab"; // does not work. In PHP, a string is converted to its ascii form.
    // ' ' is 32, "ab" is 0x60,0x61 (or something like that. I don't remember the exact ascii representation)
    printf("%d\n", y);

    return 0;
}

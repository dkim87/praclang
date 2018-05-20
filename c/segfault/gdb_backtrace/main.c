// http://www.unknownroad.com/rtfm/gdbtut/gdbsegfault.html

#include<stdio.h>
#include <stdlib.h>

int main(){
    char *buf;

    size_t buf_size;
    buf_size = (1 << 31) - 1; // expected
    buf_size = (unsigned)(1 << 31); // expected
    buf_size = (1 << 31); // unexpected -> integer promotion -> store -2^31 in buf_size, which is a very large value.
    printf("%lu\n", buf_size);
    buf = malloc(buf_size);
    printf("buf = %p\n", buf);

    printf("buf = %p\n", buf);

    printf("%d %lu\n", (1 << 31), (1 << 31));


    fgets(buf, 10, stdin);

    printf("%s\n", buf);

    return 0;
}

// https://www.geeksforgeeks.org/c-program-for-pipe-in-linux/

#include <stdio.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void){
    int a[2];
    char buff[10];

    printf("a: %d %d\n", a[0], a[1]);
    if (pipe(a) == -1){
        perror("pipe");
        exit(1);
    }

    printf("a: %d %d\n", a[0], a[1]);

    write(a[1], "code", 5);
    printf("\n");
    printf("a: %d %d\n", a[0], a[1]);

    read(a[0], buff, 5);
    printf("a: %d %d\n", a[0], a[1]);
    printf("%s", buff);

    return 0;
}

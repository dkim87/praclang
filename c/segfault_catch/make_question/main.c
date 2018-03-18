#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>

sigjmp_buf point;


static void handler(int sig, siginfo_t *dont_care, void *dont_care_either) {
    longjmp(point, 1);
}

int main() {
    // bunch of preparation to use sigaction struct
    struct sigaction sa;
    memset(&sa, 0, sizeof(struct sigaction));
    sigemptyset(&sa.sa_mask);
    sa.sa_flags     = SA_NODEFER;
    sa.sa_sigaction = handler;
    sigaction(SIGSEGV, &sa, NULL);
    // preparation ends.

    // now examining memory
    unsigned char *offset;
    // approximation for base stack pointer.
    offset = (unsigned char *) &sa; // stack pointer = 0x7fffxxxxxxxx (12 digits)
    printf("%p\n", offset);
    offset -= 8385750; // linux stack size = 8388608
    size_t trial = 1000000;

    for(size_t i = 0; i<trial; i++){
        if (setjmp(point) == 0){
            printf("normal at %p with value of %u\n", offset, *offset);
        }else{
            printf("segfault at %p\n", offset);
        }
        //offset++; // no problem with segfault handling
        offset--; // handling does not work.
    }

    return 0;
}


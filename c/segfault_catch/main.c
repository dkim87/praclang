#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include "print_bitn.h"

sigjmp_buf point;

static void do_segv() {
    int *segv;
    segv = 0; /* malloc(a_huge_amount); */
    *segv = 1;
}

static void handler(int sig, siginfo_t *dont_care, void *dont_care_either) {
    //printf("sig = %d, 2 = %p, 3 = %p\n", sig, dont_care, dont_care_either);
    //printf("segfault!\n");
    longjmp(point, 1);
}

int main() {
    struct sigaction sa;

    //printf("size of struct sigaction: %lu\n", sizeof sa);

    memset(&sa, 0, sizeof(struct sigaction)); // 16
    sigemptyset(&sa.sa_mask); // zeroing?

    //print_bitn(&sa.sa_mask, sizeof sa.sa_mask);

    sa.sa_flags     = SA_NODEFER; // 16

   //printf("sa.sa_flag val?\n");
   //print_bitn(&sa.sa_flags, sizeof sa.sa_flags);

    sa.sa_sigaction = handler; // size is 8.. pointer?

   //printf("sa_sigaction val?\n");
   //print_bitn(&sa.sa_sigaction, sizeof sa.sa_sigaction);

    sigaction(SIGSEGV, &sa, NULL); /* ignore whether it works or not */

   //printf("now testing...\n");
    unsigned char *offset;
    offset = (unsigned char *) &sa;
    printf("%p\n", offset);
    //offset -= 8385750;
    size_t test_range = 1000000;

#if 1
    for(size_t i = 0; i<test_range; i++){
        if (setjmp(point) == 0){
            print_bitn(offset, 1);
        }else{
            //fprintf(stderr, "rather unexpected error\n");
            printf("segfault at %p\n", offset);
        }
        offset++;
        //offset--;
    }
#else
    if (setjmp(point) == 0){
        do_segv();
    }else{
        printf("segfault!");
    }
#endif
    return 0;
}


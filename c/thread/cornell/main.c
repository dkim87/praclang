#include <stdio.h>
#include <pthread.h>
#define NUM_THREADS 5
void *print_hello(void *threadid){
    long tid;
    tid = (long) threadid;
    printf("Hello World! It's me, thread #%ld!\n", tid);
    for(unsigned long i=0; i<0xfffffff; i++);
    printf("Success!\n");
    pthread_exit(NULL);
}

int main(){
    pthread_t threads[NUM_THREADS];
    int rc;
    long t;
    for (t=0; t < NUM_THREADS; t++){
        printf("In main: creating thread %ld\n", t);
        rc = pthread_create(threads + t, NULL, print_hello, (void *) t);
        if(rc){
            printf("ERROR; return code from pthread_create() is %d\n", rc);
        }
    }

    /* wait for all threads to complete */
    for (t = 0; t < NUM_THREADS; t++){
        pthread_join(threads[t], NULL);
    }

    pthread_exit(NULL);

}

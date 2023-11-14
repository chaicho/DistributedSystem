// worker.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "timerIDL.h" // header file generated by rpcgen

// global variable to store the local clock
long local_time = 0;

// service function to get the time from the worker
long *get_time_1_svc(void *argp, struct svc_req *rqstp) {
    // allocate memory for the result
    static long result;
    // update the local clock randomly
    local_time += rand() % 100;
    // set the result to the local clock
    result = local_time;
    // return a pointer to the result
    return &result;
}

// service function to set the time to the worker
void *set_time_1_svc(long *argp, struct svc_req *rqstp) {
    // allocate memory for the result
    static char *result;
    // get the average time from the argument
    long avg_time = *argp;
    // display the average time
    printf("Average time: %ld\n", avg_time);
    // return a pointer to the result
    return (void *)&result;
}

// int main(int argc, char *argv[]) {
//     // register the service functions with the RPC runtime
//     register TIMER_PROG(TIME_VERS, );
//     // initialize the random seed
//     srand(time(NULL));
//     // loop forever
//     svc_run();
//     return 0;
// }

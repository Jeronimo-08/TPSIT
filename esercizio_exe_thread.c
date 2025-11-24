#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <pthread.h>

void *codice_thread(void* arg) {
    printf("Io sono il thread\n");
    pthread_exit(NULL);
}


int main(){
    printf("Io sono il main\n");

    pthread_t ptid;
    pthread_create(&ptid, NULL, codice_thread, NULL);
    sleep(1);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <pthread.h>

int main(){
 
  printf("Sono il processo figlio con PID: %lu\n", pthread_self());

}        

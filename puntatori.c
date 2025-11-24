#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


void incrementa(int *a) {
    (*a)++;
}

int main() {
    int k = 0;
    
    incrementa(&k);
    
    printf("Valore di k: %d\n", valore);
    
    return 0;

}
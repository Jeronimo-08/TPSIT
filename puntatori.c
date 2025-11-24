#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int * incrementa() {
    int *p = malloc(sizeof(int));
    *p = 10;
    (*p)++;
    return p;
    
}

int main() {
    int *c;
    c = incrementa();
    printf("Valore di c: %d\n", *c);    
}
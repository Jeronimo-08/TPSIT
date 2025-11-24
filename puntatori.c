#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int * func() {
    int b = 5;
    return &a;
    
}

void main() {
    int *c;
    c = func();
    printf("Valore di c: %d\n", *c);    
}
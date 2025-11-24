#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(){
    float a;
    scanf("%f", &a);
    float *n = malloc(a * sizeof(float));
    for(int i = 0; i < a; i++){
        scanf("%f", &n[i]);
   
}
float media = 0;
for(int i = 0; i < a; i++){
    media += n[i];
}
media = media / a;
      for(int i = 0; i < a; i++){
        if(n[i] > media){
            printf("Ci sono numeri maggiori della media (%f)\n", media);
            printf("%f\n", n[i]);
        }
            else{
            
        printf("Non ci sono numeri maggiori della media (%f)\n", media);
        break;
            }
    }

free(n);
return 0;
} 



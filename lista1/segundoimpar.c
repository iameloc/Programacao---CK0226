#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};

int smimpar;

// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main(){
    int mimpar = -1;
    smimpar = -1;
    for(int i = 0; i<N; i++){
        if(mimpar == -1 && L[i]%2 == 1){
            mimpar = L[i];
        }
        if(L[i]%2 == 1 && L[i] < mimpar){
            mimpar = L[i];
        }
    }
    for(int i = 0; i<N; i++){
        if(smimpar == -1 && L[i]%2 == 1 && L[i] != mimpar){
            smimpar = L[i];
        }
        if(L[i]%2 == 1 && L[i] < smimpar && L[i] != mimpar){
            smimpar = L[i];
        }
    }
  printf("mimpar %d smimpar %d\n", mimpar, smimpar);
}

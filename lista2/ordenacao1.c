// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,6,2,7,3,8,4,9,5,10};


// -- escreva seu código abaixo, não altere esta linha



int main() {
    int i,j,k;
    int A[N];
    i = 0; j = 1; k = 0;
    
    while(i<N && j<N){
        if(L[i]<L[j]){
            A[k] = L[i]; k++; i+=2;
        }
        else{
            A[k] = L[j]; k++; j+=2;
        }
    }
    
    while(i<N){
        A[k] = L[i]; k++; i+= 2;
    }
    while(j<N){
        A[k] = L[j]; k++; j+=2;
    }
    
    for(int i = 0; i<N; i++){
      L[i] = A[i];
    }
}

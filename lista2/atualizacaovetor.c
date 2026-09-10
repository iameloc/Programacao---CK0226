// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {3,8,12,15,20,28,31,43,48,51};


// -- escreva seu código abaixo, não altere esta linha



int main() {
    int maxpar = 0;
    int index;
  
    for(int i = 0; i<N; i++){
        if(L[i]%2==0 && L[i]>maxpar){
            maxpar = L[i];
            index = i;
        }
    }
    maxpar = maxpar/2;
    
    for(int i = index; i>0; i--){
        if(L[i-1] < L[i] && L[i-1]>maxpar){
            L[i] = L[i-1];
        }
        else if(L[i-1] < L[i] && L[i-1]<=maxpar){
            L[i] = maxpar;
            break;
        }
    }
}

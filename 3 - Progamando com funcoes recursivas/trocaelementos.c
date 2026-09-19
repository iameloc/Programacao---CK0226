// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 8

int L[N] = {2,3,4,1,2,3,4,6};

void troca_consecutivos(int L[], int i, int j);

// -- escreva seu código abaixo, não altere esta linha

void troca_consecutivos(int L[], int i, int j){
    if(i>=j) return;

    int temp = L[i];
    L[i] = L[i+1];
    L[i+1] = temp;

    troca_consecutivos(L,i+2,j);
  
}


int main() {

	troca_consecutivos(L, 0, N-1);
}

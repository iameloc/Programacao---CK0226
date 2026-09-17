// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 8

int L[N] = {2,3,4,1,2,3,4,6};

void remova_pares(int L[], int i, int j);

// -- escreva seu código abaixo, não altere esta linha

void remova_pares(int L[], int i, int j){
    if(i>j) return;
    if(i==j){
        if(L[i]%2==0) L[i] = 0;
    }else{
        if(L[i]%2==0){
            for(int k = i; k<j; k++){
                L[k]=L[k+1];
            } L[j] = 0; remova_pares(L,i,j-1);
        } else {
            remova_pares(L,i+1,j);
        }
    }
    return;
}


int main() {

	remova_pares(L, 0, N-1);
}
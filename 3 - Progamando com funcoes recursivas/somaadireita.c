// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 8

int L[N] = {2,3,4,1,2,3,4,6};

void transforma(int L[], int i, int j);

// -- escreva seu código abaixo, não altere esta linha

void transforma(int L[], int i, int j){
    //base: lista com 1 ou nenhum elemento
    if(i>=j) return;
    
    //se lista possui 2 elementos, realiza a operação
	if((j-i)==1){
        L[i] += L[i+1];
    } else {
        transforma(L,i+1,j); //se lista tem mais de 2 elementos, transforma a direita
        L[i] += L[i+1]; //após tranformar, o elemento imediatamente a direita de i será a soma dos outros
                        //logo, basta somar este com o elemento imediatamente após
    }
}


int main() {
	transforma(L, 0, N-1);

    for(int i = 0; i<N; i++){
        printf("%d ",L[i]);
    }
}
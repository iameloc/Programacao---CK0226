// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 5
int L[5] = {5,8,3,10,7};
int C = 3;
int K = 12;
int resp;

// -- escreva seu código abaixo, não altere esta linha



int main() {
    int p = 0;
    for(int cont = 0; cont<C; cont++){
        int soma = 0;
        while(p<N){
            if(L[p]+soma<=K){
                soma+=L[p]; p++;
            } else {
                break;
            }
        }
        resp += soma;
    }
    printf("%d ", resp);
}


// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 5
int L[5] = {5,8,3,10,7};
int C = 3;
int K; // variavel de saida

// -- escreva seu código abaixo, não altere esta linha



int main() {
    int p = 0;
    int alto = 0, baixo = 0, resp = 0, meio;
    
    for(int i = 0; i<N; i++){
        alto += L[i];
        if(L[i]>baixo) baixo = L[i];
    }
    int MAX = alto;
    
    while(baixo<alto){
        meio = (alto+baixo)/2;
        resp = 0;
        int p = 0;
      
        for(int cont = 0; cont<C; cont++){
            int soma = 0;
            while(p<N){
                if(L[p]+soma<=meio){
                    soma+=L[p]; p++;
                } else {
                    break;
                }
            }
            resp += soma;
        }
        printf("resp = %d ", resp);
        printf("meio = %d ", meio);
        printf("max = %d ", alto);
        printf("min = %d \n", baixo);

        if(resp<MAX) baixo = meio+1;
        else alto = meio;
        
    }

    K=baixo;
    printf("K = %d ", K);
}

    
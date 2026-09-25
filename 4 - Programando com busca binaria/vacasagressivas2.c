// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {5,37,54,62,65,68,70,88,90,99};
int C = 7;
int resp;

// -- escreva seu código abaixo, não altere esta linha

int maior_gap(int L[]){
    int maior = L[1]-L[0];
    int p = 1;
    while(p<N-1){
        if(L[p+1]-L[p]>maior){
            maior = L[p+1]-L[p];
        } p++;
    }
    return maior;
}


int main() {
    int alto = maior_gap(L);
    int baixo = 0;

    while(baixo<=alto){
        int meio = (alto+baixo)/2;
        int cont = 1;
        int p1 = 0, p2 = 1;
        resp = 0;

        while(p2<N && cont<C){
            if((L[p2]-L[p1])<meio) p2++;
            else{
                p1 = p2; p2++; cont++;
            }
        }

        if(cont == C) resp = 1;
        
        if(resp == 1) baixo = meio + 1;
        else alto = meio - 1;
    }
    resp = alto;
}

// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 13

int L[N] = {5,11,11,23,28,28,34,47,56,72,89,89,95};
int C = 7;
int D = 6;
int resp;

// -- escreva seu código abaixo, não altere esta linha



int main() {
    int cont = 1;
    int p1 = 0, p2 = 1;
    resp = 0;

    while(p2<N && cont<D){
        if((L[p2]-L[p1])<D) p2++;
        else{
            p1 = p2; p2++; cont++;
        }
        printf("p1 = %d \n",p1);
        printf("p2 = %d \n",p2);
        printf("cont = %d \n",cont);
    }
    
    if(cont == C) resp = 1;
    printf("%d ",resp);

}

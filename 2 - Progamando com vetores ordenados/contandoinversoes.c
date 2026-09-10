// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 10
int L[N] = {2,3,5,7,1,3,5,8,10,12};
int meio = 4;
int cont;

// -- escreva seu código abaixo, não altere esta linha


int main() {
  int i = 0;
  int j = meio;
  cont = 0;
  while(j<N){
    if(i == meio){
      i = 0; j++;
    }else{
    if(L[i]>L[j]){
      cont++;
    }
    i++;
    }
  } 
}
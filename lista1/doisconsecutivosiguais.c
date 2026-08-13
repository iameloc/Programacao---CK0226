#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,1,3,1,4,1,5,1,6};

int resposta;

// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {
  for(int i = 1; i<N; i++){
    if (L[i-1] == L[i]){
      resposta = 1;
      break;
        }else{
      resposta = 0;
        }
  }
  

}

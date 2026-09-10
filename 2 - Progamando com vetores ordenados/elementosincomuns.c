#include <stdlib.h>
#include <stdio.h>

#define N 10

int U[N] = {1,2,3,4,5,6,7,8,9,10};
int V[N] = {4,5,6,7,8,9,10,1,2,3};

int resp;


// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {
    int i = 0, j = 0, cont = 0;
    while(i<N && j<N){
        if(U[i]<V[j]) i++;
        else if(U[i]>V[j]) j++;
        else {cont++; i++; j++;};
    }
    while(i<N){
        i++;
    }
    while(j<N){
        j++;
    }
    
    resp = (N-cont)*2;
    printf("%d ", cont);
    printf("%d ", resp);

  //ideia: contar todos que aparecem nos dois e tirar do total
  //tentar fazer sem logica complementar
  
}

#include <stdlib.h>
#include <stdio.h>

#define N 10
#define M 5

int L[N] = {3,8,12,15,20,0,0,0,0,0};

int B[M] = {2,11,19,26,32};

// -- escreva seu código abaixo, não altere esta linha

int main() {

    //contar quantidade de elementos não nulos em L
    int cont = 0;
    for(int i = 0; i<N; i++){
        if(L[i]!=0){
            cont++;
        }
        else{
            break;
        }
    }

    int i = cont-1; //dedo no último elemento não nulo de L
    int j = M-1; //dedo no último elemento de B
    int p = cont+M-1; //dedo no último elemento de L

    while(j>=0){ //dedo j percorre a lista B do fim para o início 
        if(i>=0 && L[i]>B[j]){ //se o dedo i estiver em L e L[i]>B[j]
            L[p] = L[i]; //bota o L[i] no final de L
            i--; //move o dedo i para tras
        }
        else{ //senao
            L[p] = B[j]; //bota o elemento de B na lista
            j--; //move o dedo j para tras
        }
        p--; //move o dedo p para tras
    }
}
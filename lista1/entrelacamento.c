#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};

// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {
    //solucao feita usando lista auxiliar
    //pensar em solucao sem lista auxiliar


    int U[N];
    for(int i = 0; i<N; i++){
        U[i] = 0;
    }

    for(int i = 0; i<N; i++){
        if(i<=(N/2 - 1)){
            int d = i;
            U[2*d] = L[i];
        }
        else{
            int D = N-1-i;
            U[N-1-2*D] = L[i];
        }
    }
    
    for(int i = 0; i<N; i++){
        int temp;
        temp = L[i];
        L[i] = U[i];
        U[i] = L[i];
    }
    for(int i = 0; i<N; i++){
        printf("%d ", L[i]);
    }
}
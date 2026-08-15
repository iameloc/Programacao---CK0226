#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};

// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {
    int soma = (L[0]+L[N-1])/2;
    int b = 0; int f = N-1;
    int temp;
    
    while(b<f){
        if((L[b]+L[f])/2 == soma){
            temp = L[b];
            L[b] = L[f];
            L[f] = temp;
            b++; f--;
        }
    }

    for(int i = 0; i<N; i++){
        printf("%d ",L[i]);
    }
}
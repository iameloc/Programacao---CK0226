// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 10
#define M 5

int L[N] = {2,3,5,8,12,15,19,20,32,35};

int B[M] = {2,8,19,20,32};

// -- escreva seu código abaixo, não altere esta linha



int main() {
    int i = N-1;
    int j = M-1;
    int p = N-1;

    while(j>=0){
        if(L[i]>B[j]){
            i--;
        }
        else if(L[i]==B[j]){
            L[i]=L[p];
            L[p]=0;
            i--;j--;p--;
        }
    }
    for(int i = 0; i<N; i++){
        printf("%d " ,L[i]);
    }
}
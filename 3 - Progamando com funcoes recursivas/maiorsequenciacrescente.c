// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 8

int L[N] = {2,3,4,1,2,3,4,6};

int resp;

int msc(int L[], int i, int j);


// -- escreva seu código abaixo, não altere esta linha

int msc(int L[], int i, int j){
    int k = 1;

    if(i>=j) return 0;

    while(L[i]<=L[i+1]){
        i++; k++;
    }
    
    if(msc(L,i+1,j) > k) resp = msc(L,i+1,j);
    else resp = k;
    
    return resp;
}


int main() {
	resp = msc(L, 0, N-1);
    printf("%d ",resp);
}

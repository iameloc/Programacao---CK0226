// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 8

int L[N] = {2,3,4,1,2,3,4,6};

int resp;

int checa_ordenado(int L[], int i, int j);


// -- escreva seu código abaixo, não altere esta linha

int checa_ordenado(int L[], int i, int j){
    //caso base: array com 1 ou nenhum elemento
    if(i>=j){
        return 1;
    }
    //array com 2 elementos
    if(j-i==1){
        if(L[j]>=L[i]){
            return 1;
        }
        else{
            return 0;
        }
    }

    //caso recursivo:
    int meio = (i+j)/2;
    return checa_ordenado(L,i,meio)*checa_ordenado(L,meio,j);

}


int main() {
	resp = checa_ordenado(L, 0, N-1);   
    printf("%d \n",resp);
}

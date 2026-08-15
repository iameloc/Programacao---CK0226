#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};


// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {
    int impar;
    int index;
    int achou = 0;
    for(int i = 0; i<N; i++){
        if(L[i]%2 == 1){
            impar = L[i]; index = i; achou = 1; break;
        }
    }
    if(achou == 1){
        int temp = L[0];
        for(int i = index; i>0; i--){
            L[i] = L[i-1];
        }
        L[0] = impar;
    }

}

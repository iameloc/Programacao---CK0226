#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};


// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {
    int impar = -1;
    int index;

    for(int i = 0; i<N; i++){
        if(impar == -1 && L[i]%2==1){
            impar = L[i]; index = i;
        }
        else if(L[i]%2 == 1 && L[i]>impar){
            impar = L[i]; index = i;
        }
    }
    printf("%d\n",impar);

    if(impar != -1){
        for(int i = index; i<N-1; i++){
            L[i] = L[i+1];
        }

        L[N-1] = impar;
    }

    for(int i = 0; i<N; i++){
        printf("%d ", L[i]);
    }
}
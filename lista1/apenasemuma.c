#include <stdlib.h>
#include <stdio.h>

#define N 12

//int U[N] = {1,2,3,4,5,6,7,8,9,10};
//int V[N] = {4,5,6,7,8,9,10,1,2,3};

int U[N] = {1,10,12,4,13,9,8,14,3,7,16,12};
int V[N] = {3,15,6,7,18,10,13,2,1,12,5,9};

int resp;


// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {
    resp = 0;

    for(int i = 0; i<N; i++){
        int find = 0;
        for(int j = 0; j<N; j++){
            if(V[i]==U[j]){
                find = 1; break;
            }
        }
        if(find == 0){
            resp += 1;
        }
    }

    for(int i = 0; i<N; i++){
        int find = 0;
        for(int j = 0; j<N; j++){
            if(U[i]==V[j]){
                find = 1; break;
            }
        }
        if(find == 0){
            resp += 1;
        }
    }

    printf("%d ", resp);
}
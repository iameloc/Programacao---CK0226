#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {10,9,8,7,6,5,4,3,2,1};

int k = 6;

// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {
    int i = 0, j = N-1;
    while(i<j){
        if(L[i]>=k){
            if(L[j]<k){
                int temp = L[i];
                L[i] = L[j];
                L[j] = temp;
            }else j--;
        }else i++;
    }
    
}
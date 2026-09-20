// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

int P = 354;
int E = 10;

int resp;


// -- escreva seu código abaixo, não altere esta linha



int main() {
    int alto = P;
    int baixo = 0;
    int S;

   while(1){
        int h = 0;
        int S = (alto+baixo)/2;
        int cont = 0; //usado na fadiga do sapo

        while(h>=0){
            h = h + S-(10*cont); cont++;
            if(h>=P) break;
            h -= E;
        }

        if(h>=P) { resp = S; alto = S-1;} //é importante atualizar resp antes de decrementar alto
        else baixo = S+1;

        if(alto<baixo) break; //condição de parada da busca binária
    }

    printf("resp = %d ",resp);

}

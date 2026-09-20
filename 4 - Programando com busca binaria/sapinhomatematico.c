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
        printf("\n");
        int h = 0;
        int S = (alto+baixo)/2;
        int cont = 0;

        while(h>=0){
            h = h + S-(10*cont); cont++;
            if(h>=P) break;
            h -= E;
        }

        
        printf("alto = %d \n",alto);
        printf("baixo = %d \n",baixo);

        if(h>=P) { resp = S; alto = S-1;} //atualizar resp antes de incrementar alto
        else baixo = S+1;

        printf("h = %d \n",h);
        printf("alto = %d \n",alto);
        printf("baixo = %d \n",baixo);
        printf("S = %d \n",S);
        printf("\n");
        

        if(alto<baixo) break;
    }

    printf("resp = %d ",resp);
    
    


}

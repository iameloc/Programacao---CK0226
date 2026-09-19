// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

int P = 800;
int S = 300;
int E = 100;

int resp;

// -- escreva seu código abaixo, não altere esta linha



int main() {
    int h = 0;
    int cont = 0;

    while(h>=0){ //enquanto o sapo nao se afoga
        h = h + S-10*cont; cont++; //altura = altura atual somado com saltos(considerando a fadiga do sapo)
        if(h>=P){ //checa se tal altura é suficiente para sair do poço
            break; //se for, sai do loop
        }
        h -= E; //senao, considera a escorregada do sapo
    }

    if(h<0) resp = -1;
    else resp = cont;

    printf("%d ",resp);


}
// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct NoLista{
	int valor;
	struct NoLista * prox;
} NoLista;

NoLista * criar_no(int valor, NoLista * prox){
	NoLista * no = malloc(sizeof(NoLista));
	no->valor = valor;
	no->prox = prox;
	return no;
}

NoLista * p;
NoLista * q;
int resp;




// -- escreva seu código abaixo, não altere esta linha



int main() {
    NoLista *x = p;
    NoLista *y = q;
    
    while(x != NULL && y != NULL){
        if(x->valor == y->valor){
            while(x->prox != NULL && x->valor == x->prox->valor) x = x->prox;
            while(y->prox != NULL && y->valor == y->prox->valor) y = y->prox;
            x = x->prox;
            y = y->prox;
        }
        else if(x->valor > y->valor){
            resp ++;
            y = y->prox;
        }

        else if(x->valor < y->valor){
            resp ++;
            x = x->prox;
        }   
    }

    while(x != NULL){
        resp++; x = x->prox;
    }

    while(y != NULL){
        resp++; y = y->prox;
    }
}

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

int resp;

/*
a inicialização será feita no sistema de tarefas
p = criar_no(5, criar_no(8, criar_no(13, criar_no(2, NULL))));
*/


// -- escreva seu código abaixo, não altere esta linha



int main() {
    NoLista *x = p;
    int mfreq = 0;
    resp = 0;

    while(x != NULL){
        int num = x->valor;
        NoLista *y = p;
        int cont = 0;

        while(y != NULL){
            if(y->valor == num) cont++;
            y = y->prox;
        }

        if(cont > mfreq){
            mfreq = cont;
            resp = num;
        }
        
        x = x->prox;
    }
}

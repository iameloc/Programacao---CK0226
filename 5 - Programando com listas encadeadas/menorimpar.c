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
    int findi = 0;
    
    while(x != NULL){
        if(findi == 0 && x->valor % 2 != 0){
            resp = x->valor; findi = 1;
        }

        if(findi == 1 && x->valor % 2 != 0){
            if(x->valor<resp) resp = x->valor;
        }

        x = x->prox;
    }
  
}

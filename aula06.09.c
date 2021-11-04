#include<stdio.h>

struct automovel {
    int info;
    struct Lista* prox;
};

typedef struct lista Lista;

Lista* inicializar(void){
    return NULL;
}
int main(void) {
    Lista* listaFinal;
    listaFinal = inicializar();
    listaFinal = inserir(listaFinal, 13);
    listaFinal = inserir(listaFinal, 56);
}

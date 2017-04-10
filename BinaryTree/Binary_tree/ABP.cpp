#include "ABP.h"

void ABP::inserirNodo(int elemento){
    NodoAB* aux = raiz;
    while (aux != NULL){
        if (aux->getDado() < elemento)
            aux = aux->nodoEsquerda();
        else
            aux = aux->nodoDireita();
    }
    *aux = NodoAB(elemento, NULL, NULL);
}

NodoAB* ABP::procurarNodo (int elemento){
    NodoAB* aux = raiz;
    while (aux != NULL && aux->getDado() != elemento){
        if (aux->getDado() < elemento)
            aux = aux->nodoEsquerda();
        else
            aux = aux->nodoDireita();
    }
    return aux;
}

void ABP::auxApagaABP (NodoAB* arv){
    if(arv == NULL)
        return;
    auxApagaABP(arv->nodoEsquerda());
    auxApagaABP(arv->nodoDireita());
    delete arv;
}

#include "ABP.h"

void ABP::inserirNodo(int elemento){
    NodoAB* aux = raiz;
    while (aux != nullptr){
        if (aux.getDado() < elemento)
            aux = aux.nodoEsquerda();
        else
            aux = aux.nodoDireita();
    }
    aux = NodoAB(elemento, nullptr, nullptr);
}

NodoAB* ABP::procurarNodo (int elemento){
    NodoAB* aux = raiz;
    while (aux != nullptr && aux.getDado() != elemento){
        if (aux.getDado() < elemento)
            aux = aux.nodoEsquerda();
        else
            aux = aux.nodoDireita();
    }
    aux = NodoAB(elemento, nullptr, nullptr);
}

void ABP::auxApagaABP (NodoAB* arv){
    if(arv == nullptr)
        return;
    auxApagaABP(arv.nodoEsquerda());
    auxApagaABP(arv.nodoDireita());
    delete arv;
}

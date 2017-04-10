#include "ABP.h"
#include <iostream>
using namespace std;

//construtores e destrutores
ABP::ABP (){
    *raiz = NodoAB();
}


ABP::~ABP (){
    auxApagaABP(raiz);

}

// auxiliares
void ABP::auxApagaABP (NodoAB* arv){
    if(arv == NULL)
        return;
    auxApagaABP(arv->nodoEsquerda());
    auxApagaABP(arv->nodoDireita());
    delete arv;
}

void ABP::auxInserir (NodoAB *& r, int element) {
    if(r == NULL)
        r = new NodoAB(element, NULL, NULL);
    else{
        if (r->getDado() > element)
           auxInserir(r->esquerda,element);
        else
           auxInserir(r->direita,element);
    }
}
void ABP::auxRemoverNodo (NodoAB *&, int) {}
NodoAB* ABP::auxProcurar (NodoAB *, int){}
void ABP::auxImprimirABP (NodoAB *, int) {}


//Metodos publicos

void ABP::inserirNodo(int elemento){
    auxInserir(raiz, elemento);
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

void ABP::apagaABP (){}
void ABP::removerNodo (int elemento){

}
NodoAB* ABP::removerMenorValor (NodoAB *&){}
bool ABP::estaVazia (){
    return (raiz == NULL);
}
void ABP::imprimirABP (){}

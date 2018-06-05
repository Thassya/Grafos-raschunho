//
// Created by rodolpho on 21/05/18.
//

#include "Aresta.h"
#include "Vertice.h"

Aresta::Aresta(){

}

Aresta::Aresta(int origem, int destino, int peso) {
    this->origem = origem;
    this->destino = destino;
    this->peso = peso;
}

Aresta *Aresta::getVizinho(){
    return this->vizinho;
}

void Aresta::setAresta(Aresta *a) {
    if(!vizinho){ vizinho=new Aresta();}
    Aresta::vizinho = a;
}

Aresta::~Aresta() {
}
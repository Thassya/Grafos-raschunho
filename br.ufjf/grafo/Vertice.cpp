//
// Created by rodolpho on 21/05/18.
//

#include <array>
#include "Vertice.h"

using namespace std;

Vertice::Vertice(){

}
int Vertice::getNome() const {
    return nome;
}

void Vertice::setNome(int nome) {
    Vertice::nome = nome;
}

int Vertice::getPeso() const {
    return peso;
}

void Vertice::setPeso(int peso) {
    Vertice::peso = peso;
}

int Vertice::getGrau() const {
    return grau;
}

void Vertice::setGrau(int grau) {
    Vertice::grau = grau;
}

void Vertice::incrementaGrau(){
    Vertice::grau++;
}

Vertice *Vertice::getProximo() const {
    return proximo;
}

void Vertice::setProximo(Vertice *proximo) {
    Vertice::proximo = proximo;
}

Aresta *Vertice::getListaAresta() const {
    return listaAresta;
}

void Vertice::setListaAresta(Aresta *neighbor) {
   if(!getListaAresta()){
       listaAresta = neighbor;
   }
    else{
       Aresta *aux = encontraProxima(getListaAresta());
       aux->setAresta(neighbor);

   }

    incrementaGrau();

}

Aresta *Vertice::encontraProxima(Aresta *aresta){
    Aresta *aux = aresta;
    while(aux->getVizinho()){
        aux = aux->getVizinho();
    }
    return aux;
}
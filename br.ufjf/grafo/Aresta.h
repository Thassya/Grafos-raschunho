//
// Created by rodolpho on 21/05/18.
//
#pragma once

#ifndef TRABALHO_GRAFOS_ARESTA_H
#define TRABALHO_GRAFOS_ARESTA_H



#include "Vertice.h"
class Vertice;

class Aresta {

private:
    int peso;
    int destino;
    int origem;
    Aresta *vizinho;

public:
    Aresta();
    Aresta(int origem, int destino, int peso);
    const int getPeso() { return peso; };
    const int getDestino() { return destino; };
    const int getOrigem() { return origem; }
    Aresta* getVizinho();
    void setAresta(Aresta *a);
    ~Aresta();

};


#endif //TRABALHO_GRAFOS_ARESTA_H

//
// Created by rodolpho on 21/05/18.
//
#pragma once

#ifndef TRABALHO_GRAFOS_VERTICE_H
#define TRABALHO_GRAFOS_VERTICE_H


#include "Aresta.h"
class Aresta;

class Vertice {

private:
    int nome;
    int peso;
    int grau;
    Vertice* proximo;
    Aresta* listaAresta;

public:
    Vertice();
    Vertice(int nome){this->nome=nome;this->peso=0; this->grau=0;};
    int getNome() const;
    void setNome(int nome);
    int getPeso() const;
    void setPeso(int peso);
    int getGrau() const;
    void setGrau(int grau);
    Vertice* getProximo() const;
    void setProximo(Vertice* proximo);
    Aresta* getListaAresta() const;
    void setListaAresta(Aresta *listaAresta);
    void incrementaGrau();

    void setAresta(int peso);
    void addAresta(int vertice1, int vertice2);
    Aresta* encontraProxima(Aresta *aresta);

};


#endif //TRABALHO_GRAFOS_VERTICE_H

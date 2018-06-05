//
// Created by rodolpho on 18/05/18.
//

#ifndef TRABALHO_GRAFOS_GRAFO_H
#define TRABALHO_GRAFOS_GRAFO_H

#include "Vertice.h"
#include <string>

using namespace std;

class Grafo {

private:
    Vertice* inicio;
    int ordem;
    int grauGrafo;
    int numArestas;
    void lerArquivo(string nomeArquivoEntrada);

public:
    Grafo(string nomeArquivoEntrada);
    Vertice *getInicio() const;
    void setInicio(Vertice *inicio);
    int getOrdem() const;
    int getGrau();
    void setOrdem(int ordem);
    void salvarArquivo();

    void inicializaGrafo(int ordem);
    void addVertice(int vertice1, int vertice2, int peso);
    Vertice* addVertice(int vertice1);
    Vertice* encontraVertice(int vertice);

    int getGrau(int vertice);
};


#endif //TRABALHO_GRAFOS_GRAFO_H

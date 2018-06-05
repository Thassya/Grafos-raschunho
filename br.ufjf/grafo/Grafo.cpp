
#include <clocale>
#include "Grafo.h"
#include <fstream>
#include <cstring>

using namespace std;


Grafo::Grafo(string nomeArquivoEntrada){//popula o grafo com o numero de arestas apresentado no arquivo
    lerArquivo(nomeArquivoEntrada);

}

void Grafo::lerArquivo(string nomeArquivoEntrada) {

    int ordemGrafo,v1,v2,p;

    ifstream file(nomeArquivoEntrada);
    char * url = new char [nomeArquivoEntrada.length()+1];
    strcpy(url, nomeArquivoEntrada.c_str());

    FILE *arq;

    arq = fopen(url, "r");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else

        //primeira linha indica que o grafo tem 5 vértices
        fscanf(arq,"%d", &ordemGrafo);
        this->inicializaGrafo(ordemGrafo);

    while( (fscanf(arq,"%d %d %d\n", &v1, &v2, &p))!=EOF ) {

        this->addVertice(v1,v2,p);
    }

    fclose(arq);

}

void Grafo::inicializaGrafo(int ordem){
    this->setInicio(NULL);
    this->ordem = ordem;

    Vertice *v = new Vertice(1);
    this->setInicio(v);
    for(int i=2; i<=ordem; i++){
        Vertice *aux = new Vertice(i);
        v->setProximo(aux);
        v = v->getProximo();
    }
}



/// Adiciona vertice ao Grafo, buscando se já existe ou não.
/// \param vertice1 origem
/// \param vertice2 destino
/// \param peso peso da aresta
void Grafo::addVertice(int vertice1, int vertice2,int peso) {
    Vertice *v1 = addVertice(vertice1);
    Vertice *v2 = addVertice(vertice2);

    v1->setListaAresta(new Aresta(vertice1,vertice2,peso));
    v2->setListaAresta(new Aresta(vertice1,vertice2,peso));

}


/// Retorna o ponteiro pro vértice ou um novo Vértice
/// \param vertice1 identificador do vértice (nome)
/// \return vértice
Vertice* Grafo::addVertice(int vertice1){
    Vertice *v = encontraVertice(vertice1);
    if(!v){
        v = new Vertice(vertice1);
    }
    return v;
}

/// Se existe o vértice retorna seu endereço, caso contrário retorna nulo
/// \param vertice vertice a ser buscado
/// \return null ou vértice.

Vertice* Grafo::encontraVertice(int vertice){
    Vertice *v = this->getInicio();
    while(v){
        if(v->getNome()==vertice)
            return v;
        else
            v=v->getProximo();
    }
    return NULL;
}

Vertice *Grafo::getInicio() const {
    return inicio;
}

void Grafo::setInicio(Vertice *inicio) {
    Grafo::inicio = inicio;
}

int Grafo::getOrdem() const {
    return ordem;
}

void Grafo::setOrdem(int tamanho) {
    Grafo::ordem = tamanho;
}

int Grafo::getGrau() {
    int maxGrau =0;
    Vertice *aux = this->getInicio();
    while(aux){
        if(aux->getGrau()>maxGrau){
            maxGrau=aux->getGrau();
        }
        aux= aux->getProximo();
    }
    return maxGrau;
}

int Grafo::getGrau(int vertice) {
    Vertice *aux = encontraVertice(vertice);
    if(aux){
        return aux->getGrau();
    }
    else
        return NULL;

}


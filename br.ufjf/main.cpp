#include <stdio.h>
#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include "grafo/Grafo.h"

using namespace std;
void mostrarMenuPrincipal();

Grafo *grafo;

int main() {

    ifstream file("../entradas/parametros.txt");
    int grauGrafo,v1,v2,p;


    string url="../entradas/parametros.txt";

    grafo = new Grafo(url);

    mostrarMenuPrincipal();
    return 0;
}

void mostrarMenuPrincipal() {
    int opcao = 0;
    int no=0;
    cout << "    ******  TRABALHO DE GRAFOS ******" << endl<< endl;

    while(opcao != 15) {
        cout << "Selecione uma das opções abaixo (número): " << endl << endl;
        cout << "1. Grau do grafo" << endl;
        cout << "2. Grau do nó: " << endl;
        cout << "3. Ordem do grafo" << endl;
        cout << "4. Excluir nó: " << endl;
        cout << "5. Excluir aresta: " << endl;
        cout << "6. O gafo é trivial?" << endl;
        cout << "7. O gafo é nulo?" << endl;
        cout << "8. O gafo é um multigrafo?" << endl;
        cout << "9. O gafo é completo?" << endl;
        cout << "10. O gafo é bipartido?" << endl;
        cout << "11. Sequência de graus" << endl;
        cout << "12. Vizinhança aberta do nó: " << endl;
        cout << "13. Vizinhança fechada do nó: " << endl;
        cout << "14. Verificar k-regularidade: (k informado pelo usuário) " << endl;

        cout << "15. Sair\n" << endl;
        cout << "Opcao escolhida: ";
        cin >> opcao;


        switch (opcao) {
            case 1: {
                //número max de arestas de um vértice
                cout << "Grau do grafo: " << grafo->getGrau() << endl;
                break;
            }
            case 2: {
                cout << "Digite o nó desejado: " << endl;
                cin >> no;
                if(grafo->getGrau(no)){
                cout << "Grau do nó " << no << " é: " << grafo->getGrau(no) << endl;
                }
                else {
                    cout << "Nó " << no << " não encontrado!" << endl;
                }
                break;
            }
            case 3: {
                //numero de vértices
                cout << "Ordem do grafo: " << grafo->getOrdem() << endl;
                break;
            }
            case 4: {
                break;
            }
            case 5: {
                break;
            }
            case 6: {
                break;
            }
            case 7: {
                break;
            }
            case 8: {
                break;
            }
            case 9: {
                break;
            }
            case 10: {
                break;
            }
            case 11: {
                break;
            }
            case 12: {
                break;
            }
            case 13: {
                break;
            }
            case 14: {
                break;
            }
        }
    }
}

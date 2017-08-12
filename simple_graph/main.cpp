#include "Grafo.h"
#include <iostream>
#include <string>

using namespace std;

void printAdjacentes (int tamanho, No *adjacentes) {
    cout << "Adjacentes: ";
    for (int i = 0; i < tamanho; i++) {
        cout << adjacentes[i].nome << ((i+1 < tamanho) ? "," : "\n");
    }
}

int  main() {
    Grafo *g = new Grafo(5);
    // Exemplo utilizando a matriz de adjacências dada em aula.
    int countAdj;
    No adjacentes[5];
    
    g->seta_informacao(0, "Carlos");
    g->seta_informacao(1, "Pedro");
    g->seta_informacao(2, "Rose");
    g->seta_informacao(3, "Antonio");
    g->seta_informacao(4, "Lucas");
    
    g->cria_adjacencia(0, 1, 27);
    g->cria_adjacencia(1, 2, 7);
    g->cria_adjacencia(2, 3, 19);
    g->cria_adjacencia(2, 4, 22);
    g->cria_adjacencia(3, 1, 4);
    g->cria_adjacencia(4, 0, 12);
        
    g->imprime_adjacencias();
    
    countAdj = g->adjacentes(2, adjacentes);
    printAdjacentes(countAdj, adjacentes);
    
    g->remove_adjacencia(2, 4);
    
    g->imprime_adjacencias();
    
    countAdj = g->adjacentes(2, adjacentes);
    printAdjacentes(countAdj, adjacentes);
    
}
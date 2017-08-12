#include "Grafo.h"

Grafo::Grafo(int e){
    this->tamanho = e;
	this->matrixadj = new double*[e];
    this->matrixTouches = new bool*[e];

    for (int i = 0; i < e; i++){
        this->matrixadj[i] = new double[e]{NULL};
        this->matrixTouches[i] = new bool[e] {false};
    }
	this->vertices = new No[e];
}


Grafo::~Grafo()
{
}
bool Grafo::isPosValid(int i, int j){
    if (i >= this->tamanho || j >= this->tamanho) {
        cout << "Posicao (" << i << "," << j << ") inválida. Grafo de tamanho " << this->tamanho << endl;
        return false;
    }
    return true;
}
void Grafo::cria_adjacencia(int i, int j, double p) {
    if (isPosValid(i, j)) {
        this->matrixadj[i][j] = p;
        this->matrixTouches[i][j] = true;
    }
}
void Grafo::remove_adjacencia(int i, int j){
    if (isPosValid(i, j)) {
        this->matrixTouches[i][j] = false;
    }
}
void Grafo::imprime_adjacencias()
{
    for(int i = 0; i < this->tamanho; i++){
        for(int j = 0; j < this->tamanho; j++){
            
            if (this->matrixTouches[i][j]){
                cout << this->matrixadj[i][j];
            } else {
                cout << Grafo::INFINITY;
            }
            
            if (j < this->tamanho - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
}
void Grafo::seta_informacao(int i, string V)
{
    this->vertices[i].nome = V;
}
int Grafo::adjacentes(int i, No *adj)
{
    int count = 0;
    
    if (this->isPosValid(i, 0)){
        for(int column = 0; column < this->tamanho; column++){
            if (this->matrixTouches[i][column]){
                adj[count] = this->vertices[column];
                count++;
            }
        }
    }
    
	return count;
}
#include "Grafo.h"

Grafo::Grafo(int size){
    this->tamanho = size;
	this->matrixadj = new double*[size];
    this->vertices = new No[size];
    for (int i = 0; i < size; i++){
        this->matrixadj[i] = new double[size]{NULL};
    }
    
}

Grafo::~Grafo()
{
    free(matrixadj);
    free(vertices);
}
bool Grafo::isPositionValid(int i, int j){
    bool isInvalid = i >= this->tamanho || j >= this->tamanho || i < 0 || j < 0;
    if (isInvalid) {
        cout << "Posição (" << i << "," << j << ") inválida. Grafo de tamanho " << this->tamanho << endl;
    }
    return !isInvalid;
}
void Grafo::cria_adjacencia(int i, int j, double p) {
    if (isPositionValid(i, j)) {
        this->matrixadj[i][j] = p;
        this->vertices[i].addConnection(j);
    }
}
void Grafo::remove_adjacencia(int i, int j){
    if (isPositionValid(i, j)) {
        this->vertices[i].removeConnection(j);
    }
}
void Grafo::imprime_adjacencias()
{
    for(int i = 0; i < this->tamanho; i++){
        for(int j = 0; j < this->tamanho; j++){
            
            if (this->vertices[i].hasConnection(j)){
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
    
    if (this->isPositionValid(i, 0)){
        for(int column = 0; column < this->tamanho; column++){
            if (this->vertices[i].hasConnection(column)){
                adj[count] = this->vertices[column];
                count++;
            }
        }
    }
    
	return count;
}
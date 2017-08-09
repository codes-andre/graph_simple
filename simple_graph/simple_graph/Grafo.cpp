#include "Grafo.h"



Grafo::Grafo(int e){
	this->matrixadj = new double*[e];

	for (int i = 0; i < e; i++)
		this->matrixadj[i] = new double[e];
	
	this->vertices = new No[e];
}


Grafo::~Grafo()
{
}

void Grafo::cria_adjacencia(int m, int n, double p) {
	this->matrixadj[m][n] = p;
}
void Grafo::remove_adjacencia(int i, int j){
	
}
void Grafo::imprime_adjacencias()
{
}
void Grafo::seta_informacao(int i, string V)
{
}
int Grafo::adjacentes(int i, vector<vector<double>>* adj)
{
	return 0;
}
;
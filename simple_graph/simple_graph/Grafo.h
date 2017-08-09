#pragma once
#include "No.h"
#include <vector>
#include <string>
using namespace std;

class Grafo
{
public:
	int tamanho;
	//vector<vector<double> > matrixadj;
	double** matrixadj;
	No *vertices;

	Grafo(int e);
	~Grafo();

	void cria_adjacencia(int m, int n, double p);  // cria uma adjacência entre i e j com custo P;
	void remove_adjacencia(int i, int j);  // remove a adjacência entre i e j;
	void imprime_adjacencias(); // imprime a matriz de adjacências do grafo;
	void seta_informacao(int i, string V); // atualiza a informação do nó i com o valor V (que deve ser uma string) no grafo G
	int adjacentes(int i, vector<vector<double> > *adj);  // retorna o número de adjacentes ao vértice i no grafo G e os armazena no vetor adj
};

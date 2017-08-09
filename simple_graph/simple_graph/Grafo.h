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

	void cria_adjacencia(int m, int n, double p);  // cria uma adjac�ncia entre i e j com custo P;
	void remove_adjacencia(int i, int j);  // remove a adjac�ncia entre i e j;
	void imprime_adjacencias(); // imprime a matriz de adjac�ncias do grafo;
	void seta_informacao(int i, string V); // atualiza a informa��o do n� i com o valor V (que deve ser uma string) no grafo G
	int adjacentes(int i, vector<vector<double> > *adj);  // retorna o n�mero de adjacentes ao v�rtice i no grafo G e os armazena no vetor adj
};

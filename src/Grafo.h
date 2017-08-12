#pragma once
#include "No.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Grafo
{
private:
    bool isPosValid(int i, int j);
public:
	int tamanho;
    const char INFINITY = 126;
	double** matrixadj;
    bool** matrixTouches;
	No *vertices;
    /** Constr�i um grafo de tamanho e. */
	Grafo(int e);
	~Grafo();
    /** Cria uma adjac�ncia entre i e j com custo P. */
	void cria_adjacencia(int i, int j, double p);
    /** Remove a adjac�ncia entre i e j. */
	void remove_adjacencia(int i, int j);
    /** Imprime a matriz de adjac�ncias do grafo. */
	void imprime_adjacencias();
    /** Atualiza a informa��o do n� i com o valor V (que deve ser uma string) no grafo G. */
	void seta_informacao(int i, string V);
    /** Retorna o n�mero de adjacentes ao v�rtice i no grafo G e os armazena no vetor adj. */
    int adjacentes(int i, No *adj);
};
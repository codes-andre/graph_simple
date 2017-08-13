#pragma once
#include <string>
#include <iostream>

using namespace std;

class No
{
private:
    int edges = 0;
public:
	string nome;
    /** Adiciona ligacão entre esse nó e o nó na coluna j */
    void addConnection(int j);
    /** Remove ligação entre esse nó e o nó na coluna j  */
    void removeConnection(int j);
    /** Verifica se esse nó é adjacente ao nó na coluna j  */
    bool hasConnection(int j);
};
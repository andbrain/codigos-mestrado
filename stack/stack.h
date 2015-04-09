#include <iostream>

using namespace std;

class Stack
{

private:
	struct Celula{
		int elemento;
		Celula *anterior;
	};

	Celula *topo, *inicio;
	int numero_elementos;

public:
	Stack();
	~Stack();
	//esvaziar a pilha
	void Esvaziar();
	//Empilhar elemento
	void Push(int x);
	//Desempilhar elemento
	int Pop();
	//Esta vazia?
	bool IsVazia();
	//Imprime pilha
	void Imprime();
};
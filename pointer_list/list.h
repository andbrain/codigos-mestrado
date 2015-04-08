#include <iostream>
#include <stdlib.h>
using namespace std;

class Lista{

private:
	struct Celula
	{
		int elemento;
		Celula *proximo, *anterior;
	};

	Celula *inicio, *ultimo;
	int numero_elementos;

public:
	Lista();
	~Lista();
	//inserir elementos
	void Inserir(int x);
	//remover um elemento
	void Remove(int x);
	//Esta vazia?
	bool IsVazia();
	//LimparLista
	void LimparLista();
	//Imprime Lista
	void Imprime();
	//Insere Ordenado
	void InsereOrdenado(int x);
};
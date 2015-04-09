#include <iostream>

using namespace std;

class Queue
{

private:
	struct Celula
	{
		int elemento;
		Celula *proximo;
	};

	Celula *inicio, *fim;
	int numero_elementos;

public:

	Queue();
	~Queue();
	//Enfileirar elemento
	void Enqueue(int x);
	// Desenfileirar elemento
	int Dequeue();
	// Esta vazia?
	bool IsVazia();
	//Lista elementos da fila
	void Listar();
	//Esvaziar fila
	void Esvaziar();
};
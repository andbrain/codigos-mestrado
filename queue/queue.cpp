#include "queue.h"

Queue::Queue()
{
	//construtor
	Celula *nova_celula = new Celula();
	nova_celula->elemento = 0;
	nova_celula->proximo = NULL;
	inicio = fim = nova_celula;
	numero_elementos = 0;
}

Queue::~Queue()
{
	//destrutor
}
	
Queue::Enqueue(int x)
{
	Celula *nova_celula = new Celula();
	nova_celula->elemento = x;
	//ligando novo elemento a fila
	fim->proximo = nova_celula;
	//atualizando o ponteiro fim
	fim = nova_celula;
	nova_celula->proximo = NULL;
}

Queue::Dequeue()
{
	
}
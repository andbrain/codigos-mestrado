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
	
void Queue::Enqueue(int x)
{
	Celula *nova_celula = new Celula();
	nova_celula->elemento = x;
	//ligando novo elemento a fila
	fim->proximo = nova_celula;
	//atualizando o ponteiro fim
	fim = nova_celula;
	nova_celula->proximo = NULL;
	numero_elementos++;
}

int Queue::Dequeue()
{
	int elemento = -1;

	if(!IsVazia())
	{
		Celula *aux = inicio->proximo;


		if(aux->proximo != NULL)
			inicio->proximo = aux->proximo;
		else //para quando existe um elemento na fila
		{
			inicio->proximo = NULL;
			fim = inicio;
		}
		
		elemento = aux->elemento;
		numero_elementos--;
		delete(aux);
	}

	return (elemento);
}

bool Queue::IsVazia()
{
	return (inicio == fim);
}

void Queue::Listar()
{
	Celula *aux = inicio->proximo;

	cout << "***Inicio da fila" << endl;
	
	while(aux != NULL) {
	    cout << aux->elemento << endl;
	    aux = aux->proximo;
	}

	cout << "***Fim da fila" << endl;
}
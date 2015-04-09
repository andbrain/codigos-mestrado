#include "stack.h"

Stack::Stack()
{
	//construtor
	//celula cabeca
	Celula *nova_celula = new Celula();
	//iniciando variaveis
	nova_celula->anterior = NULL;
	nova_celula->elemento = 0;
	numero_elementos = 0;
	//apontadores para cabeca
	inicio = topo = nova_celula;
}

Stack::~Stack()
{
	//destrutor
}

void Stack::Push(int x)
{
	Celula *nova_celula = new Celula();
	nova_celula->elemento = x;
	nova_celula->anterior = inicio;
	topo = nova_celula;
	numero_elementos++;
}

void Stack::Imprime()
{
	cout << "***Pilha***" << endl;
	Celula *aux = topo;

	while(inicio != aux)
	{
		cout << aux->elemento << endl;
		aux = aux->anterior;
	}

	cout << "***Fim***" << endl;
}

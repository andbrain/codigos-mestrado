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
	//inserindo o antigo topo no anterior da nova celula
	nova_celula->anterior = topo;
	//atualizando nova celula para ser o topo
	topo = nova_celula;
	//aumenta a pilha
	numero_elementos++;
}

int Stack::Pop()
{
	int elemento = -1;
	if(!IsVazia()){
		Celula *aux = topo;
		elemento = aux->elemento;
		topo = topo->anterior;
		delete(aux);
		numero_elementos--;
	}
	
	return elemento;
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
	cout << "Numero de elementos: " << numero_elementos << endl;
	cout << "***Fim***" << endl;
}

bool Stack::IsVazia()
{
	return (inicio == topo);
}

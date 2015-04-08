#include "list.h"

Lista::Lista()
{
	Celula *nova_celula = new Celula();
	nova_celula->proximo = NULL;
	inicio = ultimo = nova_celula;
	nova_celula->anterior = inicio;
	numero_elementos = 0;
}

Lista::~Lista()
{
	cout << "Finalizando Lista" << endl;
}

void Lista::Inserir(int x)
{
	Celula *aux = inicio;
	
	//percorre a lista
	while(aux->proximo != NULL)
	{
		aux = aux->proximo;
	}

	//cria o elemento
	Celula *nova_celula = new Celula();
	//atualiza o velho ultimo com a nova celula
	ultimo->proximo = nova_celula;
	//atualiza o ultimo com a nova celula
	ultimo = nova_celula;
	nova_celula->anterior = aux;
	nova_celula->proximo = NULL;
	nova_celula->elemento = x;
	numero_elementos++;
}

bool Lista::IsVazia()
{
	return(inicio==ultimo);
}



void Lista::Remove(int x)
{
	if(!IsVazia()){
		Celula *aux = inicio;
	
		//percorre a lista
		while(aux->proximo != NULL && aux->elemento != x)
		{
			aux = aux->proximo;
		}

		if(aux->proximo == NULL){
			ultimo = aux->anterior;
		}
		else
		{
			aux->proximo->anterior = aux->anterior;
		}

		aux->anterior->proximo = aux->proximo;
		delete(aux);
		numero_elementos--;
	}else{
		cout << "Lista vazia!" << endl;
	}
}

void Lista::Imprime()
{
	if(!IsVazia()){
		Celula *aux = inicio;
		
		//percorre a lista
		while(aux->proximo != NULL)
		{
			aux = aux->proximo;
			cout << aux->elemento << endl;
		}

		cout << "Ultimo Elemento:" << ultimo->elemento << endl;
		cout << "Número de elementos: " << numero_elementos << endl;
	}else{
		cout << "Lista vazia!" << endl;
	}
}

void Lista::LimparLista(){
	Celula *aux;
	while(inicio != aux){
		aux = ultimo;
		ultimo = aux->anterior;
		delete(aux);
	}
	numero_elementos = 0;
}

void Lista::InsereOrdenado(int x)
{

	if(IsVazia())
	{
		Inserir(x);
	}
	else
	{
		Celula *aux = inicio->proximo;
		Celula *nova_celula = new Celula();

		while(aux->proximo != NULL)
		{
			if(x > aux->elemento)
				aux = aux->proximo;
			else
			{	
				break;						
			}
		}

		if(aux->proximo == NULL)
		{
			// aux->proximo = nova_celula;
			// nova_celula->anterior = aux;
			// nova_celula->proximo = NULL;
			// ultimo = nova_celula;

			//atualiza o velho ultimo com a nova celula
			ultimo->proximo = nova_celula;
			//atualiza o ultimo com a nova celula
			ultimo = nova_celula;
			nova_celula->anterior = aux;
			nova_celula->proximo = NULL;	
		}
		else
		{
			aux->anterior->proximo = nova_celula;
			aux->anterior = nova_celula;
			nova_celula->anterior = aux->anterior->proximo;
			nova_celula->proximo = aux;
		}

		nova_celula->elemento = x;
		numero_elementos++;
	}

}



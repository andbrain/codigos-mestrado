#include "list.h"

int main()
{
	Lista *lista = new Lista();

	lista->InsereOrdenado(5);
	lista->InsereOrdenado(9);
	lista->InsereOrdenado(1);
	lista->InsereOrdenado(17);
	lista->InsereOrdenado(19);
	lista->InsereOrdenado(6);
	lista->InsereOrdenado(3);
	lista->InsereOrdenado(4);
	

	//lista->Remove(1);
	//lista->Imprime();
	//lista->LimparLista();
	//lista->Imprime();
	lista->Imprime();

	return 0;
}
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "queue.h"

int main()
{
	Queue *fila = new Queue();

	//seed para gerador aleatorio
	srand(time(NULL));

	for(int i=0;i<10;i++){
		fila->Enqueue(rand()%101);
	}
	
	fila->Listar();

	for(int i=0;i<12;i++){
		if(!fila->IsVazia())
			cout << "Saiu da fila: " << fila->Dequeue() << endl;
		else
			cout << "Fila vazia!" << endl;
	}

	delete(fila);
}
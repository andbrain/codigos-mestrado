#include "stack.h"
#include <cstdlib>

int main()
{
	Stack *stack = new Stack();

	for(int i=0;i<10;i++){
		stack->Push(rand()%101);
	}

	stack->Imprime();
	
	for(int i=0;i<11;i++){
		if(!stack->IsVazia()){
			cout << "Apagado: " << stack->Pop() << endl;
			stack->Imprime();
		}
		else{
			cout << "Pilha vazia!" << endl;
		}
	}
	
	delete(stack);

	return 0;
}
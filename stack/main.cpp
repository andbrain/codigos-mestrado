#include "stack.h"

int main()
{
	Stack *stack = new Stack();
	stack->Push(2);
	stack->Push(4);
	stack->Push(5);
	stack->Push(7);
	stack->Imprime();

	delete(stack);
	
	return 0;
}
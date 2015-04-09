#include "stack.h"

int main()
{
	Stack *stack = new Stack();
	stack->Push(2);

	stack->Imprime();

	return 0;
}
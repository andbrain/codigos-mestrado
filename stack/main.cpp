#include "stack.h"
#include <cstdlib>
#include <time.h>

void calculadora(Stack *stack)
{
	char dado[10];

	while(dado[0]!='q')
	{
		cin >> dado;

		if(dado[0] == '+' || dado[0] == '-' || dado[0] == '*' || dado[0] == '/')
		{
			int a = stack->Pop();
			int b = stack->Pop();

			switch(dado[0]){
				case '+':
					stack->Push(a+b);
				break;
				case '-':
					stack->Push(a-b);
				break;
				case '*':
					stack->Push(a*b);
				break;
				case '/':
					stack->Push(a/b);
				break;
			}
		}
		else
		{
			stack->Push(atoi(dado));
		}
		stack->Imprime();
	}	
}

int main()
{
	Stack *stack = new Stack();
	
	/*desabilite para usar a calculadora*/
	//calculadora(stack);

	//seed para gerador aleatorio
	srand(time(NULL));

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
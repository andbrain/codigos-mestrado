#include <iostream>

using namespace std;

class Fila
{

private:
	int MAX;
	int *vetor;
	int tamanho_heap;
public:
	Fila();
	~Fila();

	void Enqueue(int x);
	void HeapfyMax();
	int Dequeue();
};
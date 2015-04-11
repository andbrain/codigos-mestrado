#include <iostream>

using namespace std;

void troca(int *&vet, int num1, int num2)
{
    int aux;
    aux = vet[num1];
    vet[num1] = vet[num2];
    vet[num2] = aux;
}

void heapify(int *vet, int pai, int heapsize) {
    int fl, fr, imaior;
    while (true)
    {
        // O Operador << significa 2*pai
        fl = (pai << 1) + 1;
        // Filho esquerdo
        fr = fl + 1;
        // Filho direito
        // Seleciona o maior entre o pai e o filho esquerdo
        if ((fl < heapsize) && (vet[fl] > vet[pai])) imaior = fl;
        else imaior = pai;
        // Seleciona o maior entre o maior e o filho direito
        if ((fr < heapsize) && (vet[fr] > vet[imaior])) imaior = fr;
        // Se o maior for algum dos filhos, realizamos a troca
        if (imaior != pai){
            troca(vet, pai, imaior);
            // Se houver a troca, temos que reajustar a subárvore
            pai = imaior;
        }
        else break;
        // Senão, acabou o reajuste
    }
}

void build_heap(int *vet, int n) {
    for (int i=(n>>1)-1; i>=0; i--)
    {
        heapify(vet, i, n);
    };
}

void heapsort(int *vet, int n)
{
    build_heap(vet, n);
    for (int i=n-1; i > 0; i--)
    {
        troca(vet, 0,i);
        heapify(vet, 0, i);
        // imprime o heapify gerados
        for(int x=0;x<n;x++)
        {
            cout << vet[x] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int v[] = {45,32,9,10,23,1,89};
    heapsort(v,7);

    for(int i=0;i<=6;i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}

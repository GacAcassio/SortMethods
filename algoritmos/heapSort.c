#include "algoritmos.h"

void constroiHeap(int i, int n)
{
    int maior = i;
    int l = 2 * i + 1;
    int r =  2 * i + 2;

    if (l < n && compMaior(vetor[maior], vetor[l]))
    {
        maior = l;
    }
    
    if ( r < n && compMaior(vetor[maior], vetor[r]))
    {
        maior = r;
    }

    if (maior != i)
    {
        troca(&vetor[i], &vetor[maior]);
        constroiHeap(maior, n);
    }
}

void heapSort()
{
    contTroca = 0;
    contComp = 0;
    int n = tamanhoVetor;
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        constroiHeap(i, n);
    }

    for (int i = n - 1; i >= 0; i --)
    {
        troca(&vetor[0], &vetor[i]);
        constroiHeap(0, i);
    }
}
#include "algoritmos.h"

//Baseado no algoritmo apresentado em sala
void selectionSort()
{
    int min = 0;
    for (int i = 0; i < tamanhoVetor - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < tamanhoVetor; j++)
        {
            if (compMaior(vetor[j], vetor[min]))
            {
                min = j;
            }
        }
        troca(&vetor[min], &vetor[i]);
    }
}
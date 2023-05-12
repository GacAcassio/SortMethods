#include "algoritmos.h"

//Baseado no algoritmo apresentado em sala
void inserctionSort()
{
    int j;
    LogRecord* chave;
    contTroca = 0;
    contComp = 0;
    for (int i = 1; i < tamanhoVetor; i++)
    {
        chave = vetor[i];
        j = i - 1;
        while (j >= 0 && compMaior(chave, vetor[j]))
        {
            contTroca++;
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        contTroca++;
        vetor[j + 1] = chave;
    }
}
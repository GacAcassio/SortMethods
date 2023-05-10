#include "algoritmos.h"

//Baseado no algoritmo apresentado em sala
void shellSort()
{
    int h = 1, j;
    LogRecord* chave;
    while (h < tamanhoVetor)
    {
        h = (3 * h) + 1;
    }
    while (h >= 1)
    {
        h = h / 3;
        for (int i = h; i < tamanhoVetor; i++)
        {
            chave = vetor[i];
            j = i - h;
            while (j >= 0 && compMaior(chave, vetor[j]))
            {
                vetor[j + h] = vetor[j];
                j = j - h;
            }
            vetor[j + h] = chave;
        }
    }
}
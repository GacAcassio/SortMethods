#include "dados.h"

void inverter()
{
    for (int i = 0, j = tamanhoVetor - 1; i < j; i++, j--)
    {
        troca(&vetor[i], &vetor[j]);
    }
}
#include "algoritmos.h"

void bubbleSort()
{
  printf("tamanhVetor %d\n", tamanhoVetor);
  for (int i =  1; i < tamanhoVetor; i++)
  {
    for (int j = 0; j < tamanhoVetor - i; j++)
    {
      if (compMaior(vetor[j + 1], vetor[j]))
      {
        troca(&vetor[j], &vetor[j + 1]);
      }
    }
  }
}
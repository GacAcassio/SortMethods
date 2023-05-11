#include "algoritmos.h"
LogRecord** aux = NULL;

void mergeSort() 
{
  aux = malloc(sizeof(LogRecord*) * tamanhoVetor);
  if(aux == NULL)
  {
    exit(1);
  }
  sort(0, tamanhoVetor - 1);
  free(aux);
}

void sort(int i, int f) {
  if (i >= f) return;

  int m = (i + f) / 2;

  sort(i, m);
  sort(m + 1, f);

  merge(i, m, f);
}


void merge(int i, int m, int f) {
  int z,
      iv = i, ic = m + 1;

  for (z = i; z <= f; z++) aux[z] = vetor[z];

  z = i;

  while (iv <= m && ic <= f) {

    if (compMaior(aux[iv], aux[ic])) vetor[z++] = aux[iv++];
    else vetor[z++] = aux[ic++];
  }

  while (iv <= m) vetor[z++] = aux[iv++];

  while (ic <= f) vetor[z++] = aux[ic++];
}
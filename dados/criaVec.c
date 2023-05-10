#include "dados.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

//Criar vetor de tamnho x
void criaVec(LogRecord* v[], int tamanho)
{
  v = malloc(sizeof(LogRecord) * tamanho);
}
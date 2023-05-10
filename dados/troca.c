#include "dados.h"

//troca A e B de lugar
//como vetor é um vetor de ponteiros, basta apenas trocar os endereços
void troca(LogRecord** A, LogRecord** B)
{
    LogRecord* aux = *A;
    *A = *B;
    *B = aux;
}
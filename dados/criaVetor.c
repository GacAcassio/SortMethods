#include "dados.h"

int tamanhoVetor;

//Criar vetor de tamnho x
LogRecord** criaVetor()
{
    LogRecord** x = malloc(sizeof(LogRecord *) * tamanhoVetor);
    //Verifica se foi possivel alocar memória
    if (x == NULL)
    {
        printf("Erro na alocação de espaço \n");
        desalocaEspaco();
        exit(1);
    }
    //Preenche o vetor
    for (int i = 0; i < tamanhoVetor; i++)
    {
        x[i] = generateLogRecord();
    }

    return x;
}
#include "dados.h"

int tamanhoVetor;

//Criar vetor de tamnho x
LogRecord** criaVetor()
{
    LogRecord** x = malloc(sizeof(LogRecord *) * tamanhoVetor);
    //Verifica se foi possivel alocar memória
    if (*x == NULL)
    {
        printf("Erro na alocação de espaço \n");
        exit(1);
    }
    //Preenche o vetor
    for (int i = 0; i < tamanhoVetor; i++)
    {
        x[i] = generateLogRecord();
        //printf("%d   %d   %d   %d   %d   %d   %d\n", x[i]->process_id, x[i]->year, x[i]->month, x[i]->day, x[i]->hour, x[i]->minute, x[i]->second);
    }

    return x;
}
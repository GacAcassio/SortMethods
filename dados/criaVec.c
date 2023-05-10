#include "dados.h"

//Criar vetor de tamnho x
LogRecord** criaVec(int tamanho)
{
    LogRecord** x = malloc(sizeof(LogRecord *) * tamanho);
    //Verifica se foi possivel alocar memória
    if (x == NULL)
    {
        printf("Erro na alocação de espaço \n");
        return 0;
    }

    //Preenche o vetor
    for (int i = 0; i < tamanho; i++)
    {
        LogRecord* y = generateLogRecord();
        x[i] = y;
        printf("%d %d\n", x[i]->year, i);
    }

    return x;
}
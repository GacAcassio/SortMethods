#include "dados.h"

//Essa funçãpo libera o espaço utilizado, evitando memory leaks
//Verificar leaks: valgrind --leak-check=full -s ./main
LogRecord** vetor;
int tamanhoVetor;

void desalocaEspaco()
{
    for (int i = 0; i < tamanhoVetor; i++)
    {
        //printf("%d   %d   %d   %d   %d   %d   %d\n", vetor[i]->process_id, vetor[i]->year, vetor[i]->month, vetor[i]->day, vetor[i]->hour, vetor[i]->minute, vetor[i]->second);
        free(vetor[i]);
    }

    free(vetor);
}

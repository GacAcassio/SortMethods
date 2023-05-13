#include "dados.h"

//Essa funçãpo libera o espaço utilizado, evitando memory leaks
//Verificar leaks: valgrind --leak-check=full -s ./main
LogRecord** vetor;
int tamanhoVetor;

void desalocaEspaco()
{
    for (int i = 0; i < tamanhoVetor; i++)
    {
        free(vetor[i]);
    }

    free(vetor);
}

#include "dados.h"

//Essa funçãpo libera o espaço utilizado, evitando memory leaks

void desalocaEspaco(LogRecord** v, int tamanho)
{
    LogRecord** x = *v;
    for (int i = 0; i < tamanho; i++)
    {
        free(x[i]);
    }
}

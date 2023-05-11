#include "algoritmos.h"

// Baseado nos algoritmos apresentados em sala
void quickSort()
{
    quick(0, tamanhoVetor - 1);
    printf("aq\n");
}

void quick(int l, int r)
{
    int ij[2];
    particiona(ij, l, r);

    if (l < ij[1])
    {
        quick(l, ij[1] - 1);
    }

    if (ij[0] < r)
    {
        quick(ij[0], r);
    }
}

void particiona(int ret[2], int l, int r)
{
    int ij[2];
    ij[0] = l;
    ij[1] = r;
    LogRecord* x = vetor[(ij[0] + ij[1]) / 2];

    do
    {
        while (compMaior(vetor[ij[0]], x))
        {
            ij[0]++;
        }

        while (compMaior(x, vetor[ij[1]]))
        {
            ij[1]--;
        }

        if (ij[0] <= ij[1])
        {
            troca(&vetor[ij[0]], &vetor[ij[1]]);
            ij[0]++;
            ij[1]--;
        }

    } while(ij[0] <= ij[1]);

    ret[0] = ij[0];
    ret[1] = ij[1];
}

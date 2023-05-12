#include "algoritmos.h"

#include "algoritmos.h"

//O combSort é uma junção do shellSort com o bubble
//Complexidade O(n²), mas com desempenho melhor que o bubble
void combSort()
{
    contTroca = 0;
    contComp = 0;
    int n = tamanhoVetor;
    int gap = n;
    float shrinkFactor = 1.3;
    int swapped = 1;

    while (gap > 1 || swapped)
    {
        gap = (int)(gap / shrinkFactor);
        if (gap < 1)
            gap = 1;

        swapped = 0;

        for (int i = 0; i < n - gap; i++)
        {
            if (compMaior(vetor[i], vetor[i + gap]))
            {
                troca(&vetor[i], &vetor[i + gap]);
                swapped = 1;
            }
        }
    }
}

#include "algoritmos.h"

//Baseado no material de sala
void merge(int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    LogRecord** L = malloc(sizeof(LogRecord*) * n1);
    LogRecord** R = malloc(sizeof(LogRecord*) * n2);
 
    if (L == NULL || R == NULL)
    {
        printf("Erro ao alocar memória");
        desalocaEspaco();
        exit(1);
    }
    for (i = 0; i < n1; i++)
        L[i] = vetor[l + i];
    for (j = 0; j < n2; j++)
        R[j] = vetor[m + 1 + j];
 
    i = 0;     
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    {
        if (compMaior(L[i], R[j]))
        {
            vetor[k] = L[i];
            i++;
        }
        else 
        {
            vetor[k] = R[j];
            j++;
        }
        k++;
    }
 
  
    while (i < n1) 
    {
        vetor[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) 
    {
        vetor[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int l, int r)
{
    if (l < r) 
    {
        int m = l + (r - l) / 2;
 
        mergeSort(l, m);
        mergeSort(m + 1, r);
 
        merge(l, m, r);
    }
}
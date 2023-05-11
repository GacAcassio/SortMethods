#include "algoritmos.h"

void cocktailSort() {
    int left = 0;
    int right = tamanhoVetor - 1;
    int swapped = 1;

    while (left < right && swapped) {
        swapped = 0;

        // Passagem da esquerda para a direita (ordenando em ordem crescente)
        for (int i = left; i < right; i++) {
            if (compMaior(vetor[i], vetor[i + 1])) {
                troca(&vetor[i], &vetor[i + 1]);
                swapped = 1;
            }
        }
        right--;

        // Passagem da direita para a esquerda (ordenando em ordem decrescente)
        for (int i = right; i > left; i--) {
            if (compMaior(vetor[i - 1], vetor[i])) {
                troca(&vetor[i - 1], &vetor[i]);
                swapped = 1;
            }
        }
        left++;
    }
}

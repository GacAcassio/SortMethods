#include "algoritmos.h"

//Vetor aleatório complexidade O(n²)
//Vetor ordenado complexidade O(n)
//Vetor ordenado inversamente complexidade O(n²)
void cycleSort() 
{
    int n = tamanhoVetor;
    for (int cycleStart = 0; cycleStart < n - 1; cycleStart++) {
        LogRecord* item = vetor[cycleStart];
        int pos = cycleStart;
        
        for (int i = cycleStart + 1; i < n; i++) {
            if (compMaior(vetor[i], item)) {
                pos++;
            }
        }
        
        if (pos == cycleStart) {
            continue;
        }
        
        while (item == vetor[pos]) {
            pos++;
        }
        
        if (pos != cycleStart) {
            LogRecord* temp = item;
            item = vetor[pos];
            vetor[pos] = temp;
        }
        
        while (pos != cycleStart) {
            pos = cycleStart;
            
            for (int i = cycleStart + 1; i < n; i++) {
                if (compMaior(vetor[i], item)) {
                    pos++;
                }
            }
            
            while (compIgual(item, vetor[pos])) {
                pos++;
            }
            
            if (!compIgual(item, vetor[pos])) {
                LogRecord* temp = item;
                item = vetor[pos];
                vetor[pos] = temp;
            }
        }
    }
}

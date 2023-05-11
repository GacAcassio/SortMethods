#ifndef SORTS_H
#define SORTS_h
    //Incluindo todos os arquivos no header para que eu possa compilar apenas o main
    #include "algoritmos/algoritmos.h"
    #include "dados/troca.c"
    #include "dados/generateLogRecord.c"
    #include "dados/desalocaEspaco.c"
    #include "dados/criaVetor.c"
    #include "dados/compIgual.c"
    #include "dados/compMaior.c"
    #include "algoritmos/mergeSort.c"
    #include "algoritmos/heapSort.c"
    #include "algoritmos/shellSort.c"
    #include "algoritmos/quickSort.c"
    #include "algoritmos/selectionSort.c"
    #include "dados/inverter.c"
    #include "algoritmos/bubbleSort.c"
    #include "algoritmos/inserctionSort.c"
    #include "algoritmos/cycleSort.c"
    #include "algoritmos/cocktailSort.c"

    extern int tamanhoVetor;
    extern int contChamadas;
    extern LogRecord** vetor;  
      
#endif
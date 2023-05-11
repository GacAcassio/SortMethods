#ifndef ALGORITMOS_H
#define ALGORITMOS_H

   #include "../dados/dados.h"
   
   int tamanhoVetor;
   int contChamadas;
   LogRecord** vetor;
   
   void bubbleSort();
   void sort(int i, int f);
   void merge(int i, int m, int f);
   void mergeSort();
#endif
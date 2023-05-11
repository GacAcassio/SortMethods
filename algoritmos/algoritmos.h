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
   void inserctionSort();
   void selectionSort();
   void shellSort();
   void particiona(int ret[], int l, int r);
   void quick(int l, int r);
   void quickSort();
   void constroiHeap(int i, int n);
   void heapSort();
   void cycleSort();
#endif
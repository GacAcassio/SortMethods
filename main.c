//O header sorts.h incluí os headers dados.h 
//(usado para funções relacionadas a estrutura LogRecord)
//e o headder algoritmos.h
//(usado para as funções de ordenação)
//ele também inclui todos arquivos feitos, assim precisamos compilar só o main
#include "sorts.h"
#include "time.h"

//A compilação está sendo feita somente no main via compilador gcc
//Testei o clang, mas o limite de meória dele é baixo
//O valgrind está monitorando a administração de memória


//compilar com gcc no terminall: gcc -o main main.c
//executar no terminal: ./main.c

int main(void) 
{
  int op = 0;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanhoVetor);

  if (tamanhoVetor <= 0)
  {
    printf("Tamanho inválido!\n");
    return 0;
  }

  vetor = criaVetor();
    
  printf("Selecione a ordem inicial:\n0-Aleatório\n1-Ordenado Crescente\n2-Ordenado Decrescente\nOpcao: ");
  scanf("%d", &op);

  if (op < 0 || op >2)
  {
   printf("Opção inválida!\n");
    return 0;
  }

  if (op)
  {
    quickSort();
  }

  if (op == 2)
  {
    inverter();
  }

  printf("Selecione o algoritmo:\n0-Bubble Sort\n1-Inserction Sort\n2-Selection Sort\n3-Merge Sort\n4-Shell Sort\n5-Quick Sort\n6-Heap Sort\n7-Cycle Sort\n8-CockTailSort\n9-CombSort\nOpcao: ");
  scanf("%d", &op);

  clock_t inicio, fim;
  double tempoExecucao;

  inicio = clock();
  switch(op)
  {
    case 0:
      bubbleSort();
      break;
    case 1:
       printf("hmmmm %llu\n", contComp);
      inserctionSort();
      break;
    case 2:
      selectionSort();
      break;
    case 3:
      mergeSort();
      break;
    case 4:
      shellSort();
      break;
    case 5:
      quickSort();
      break;
    case 6:
      heapSort();
      break;
    case 7:
      cycleSort();
      break;
    case 8:
      cocktailSort();
      break;
    case 9:
      combSort();
      break;
    default:
      printf("Opção inválida!\n");
      return 0;
  }
  
  fim = clock();
  tempoExecucao = (double)(fim - inicio) / CLOCKS_PER_SEC;

  printf("Tempo: %.5lf\nComparacoes: %llu\nTrocas: %llu\n", tempoExecucao, contComp, contTroca);
  desalocaEspaco();
  
  return 0;
 
}

#include <stdio.h>
#include <stdlib.h>

//O header sorts.h incluí os headers dados.h 
//(usado para funções relacionadas a estrutura LogRecord)
//e o headder algoritmos.h
//(usado para as funções de ordenação)
#include "sorts.h"


//Instanciando variáveis externas/globais declaradas em sorts.h
LogRecord** vetor;
int tamanhoVetor;
int contChamadas;

//A compilação está sendo feita via Mkefile no compilador clang
//O valgrind está monitorando a administração de memória

int main(void) 
{
  int op = 0;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanhoVetor);

  if (tamanhoVetor <= 0)
  {
    printf("Tamanho inválido\n");
    return 0;
  }

  vetor = criaVetor();
    
  printf("Selecione a ordem inicial:\n0-Aleatório\n1-Ordenado Crescente\n2-Ordenado Decrescente\nOpcao: ");
  scanf("%d", &op);

  if (op < 0 || op >2)
  {
   printf("Opção inválida\n");
    return 0;
  }

  
  mergeSort(0, tamanhoVetor - 1);
  
  printf("Hello Worldss %d\n", contChamadas);
  desalocaEspaco();
  
  return 0;
 
}
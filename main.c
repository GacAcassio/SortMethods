#include <stdio.h>
#include <stdlib.h>
#include "dados/dados.h"

extern int contChamadas = 0;

int main(void) 
{
  bubble();
  LogRecord** v = criaVec(10);
  printf("Hello Worldsssss %d\n", contChamadas);
  desalocaEspaco(&v, 10);
  return 0;
}
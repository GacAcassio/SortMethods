#include <stdio.h>
#include <stdlib.h>
#include "dados/dados.h"

extern int contChamadas = 0;

int main(void) 
{
  bubble();
  printf("Hello World %d\n", contChamadas);
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "dados/dados.h"

extern int contChamadas = 0;

int main(void) 
{
  LogRecord *s = generateLogRecord();
  LogRecord *b = generateLogRecord();
  s = b;
  bubble();
  printf("Hello World %d\n", contChamadas);
  return 0;
}
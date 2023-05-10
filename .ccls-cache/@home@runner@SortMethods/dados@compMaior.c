#include "dados.h"

//verificar se  B é maior que A
int compMaior(LogRecord A, LogRecord B){
  //Retorna 1 para B é maior ou 0 para B é menor, caso seja igual, comparamos o próximo campo.
  if (B.year > A.year)
  {
    return 1;
  }
  else if (B.year < A.year)
  {
    return 0;
  }
  else if (B.month > A.month)
  {
    return 1;
  }
  else if (B.month < A.month)
  {
    return 0;
  }
  else if (B.day > A.day)
  {
    return 1;
  }
  else if (B.day < A.day)
  {
    return 0;
  }
  else if (B.hour > A.hour)
  {
    return 1;
  }
  else if (B.hour < A.hour)
  {
    return 0;
  }
  else if (B.minute > A.minute)
  {
    return 1;
  }
  else if (B.minute < A.minute)
  {
    return 0;
  }
  else if (B.second > A.second)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
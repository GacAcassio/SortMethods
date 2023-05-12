#include "dados.h"

//verificar se  B é maior que A
bool compMaior(LogRecord* A, LogRecord* B)
{
  contComp++;
  //Retorna 1 para B é maior ou 0 para B é menor, caso seja igual, comparamos o próximo campo->
  if (B->process_id > A->process_id)
  {
    return true;
  }
  else if (B->process_id < A->process_id)
  {
    return false;
  }
  else if (B->year > A->year)
  {
    return true;
  }
  else if (B->year < A->year)
  {
    return false;
  }
  else if (B->month > A->month)
  {
    return true;
  }
  else if (B->month < A->month)
  {
    return false;
  }
  else if (B->day > A->day)
  {
    return true;
  }
  else if (B->day < A->day)
  {
    return false;
  }
  else if (B->hour > A->hour)
  {
    return true;
  }
  else if (B->hour < A->hour)
  {
    return false;
  }
  else if (B->minute > A->minute)
  {
    return true;
  }
  else if (B->minute < A->minute)
  {
    return false;
  }
  else if (B->second > A->second)
  {
    return true;
  }
  else
  {
    return false;
  }
}
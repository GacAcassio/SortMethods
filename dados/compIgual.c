#include "dados.h"

//verificar se  B é igual a A
bool compIgual(LogRecord* A, LogRecord* B)
{
  if (B->process_id - A->process_id + B->year - A->year + B->month - A->month + B->day - A->day + B->hour - A->hour + B->minute - A->minute + B->second - A->second)
  {
    return false;
  }
  return true;
}
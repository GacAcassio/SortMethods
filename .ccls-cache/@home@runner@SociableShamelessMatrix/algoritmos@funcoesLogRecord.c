#include "../dados.h"
#include <stddef.h>

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

// Funcao para gerar um registro de log
LogRecord* generateLogRecord() 
{
  // Aloca um registros de log
  LogRecord *logRecordUnit = malloc(sizeof( LogRecord));
  if (logRecordUnit == NULL) 
  {
    perror("Erro ao alocar mem´oria");
    exit(EXIT_FAILURE);
  }
  
  // Gera uma data aleatoria no intervalo de 2010 a 2022
  logRecordUnit->year = rand() % 13 + 2010;
  logRecordUnit->month = rand() % 12 + 1;
  logRecordUnit->day = rand() % 31 + 1;
  
  // Gera um horario aleatorio no intervalo de 00:00:00 a 23:59:59
  logRecordUnit->hour = rand() % 24;
  logRecordUnit->minute = rand() % 60;
  logRecordUnit->second = rand() % 60;
  
  // Gera um id de processo aleatorio
  logRecordUnit->process_id = rand() % 100;
  
  return logRecordUnit;
}
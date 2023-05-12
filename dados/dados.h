// guardas de cabeçalho, impedem inclusões cíclicas
#ifndef DADOS_H
#define DADOS_H

  #include <stddef.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include <stdbool.h>

  #define EXIT_FAILURE 1

  // Definição da struct que representa um registro de log
  typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int process_id; // id do processo
  } LogRecord;

  bool compMaior(LogRecord* A, LogRecord* B);
  LogRecord** criaVetor();
  void desalocaEspaco();
  LogRecord* generateLogRecord();
  void troca(LogRecord** A, LogRecord** B);
  void inverter();
  bool compMaior(LogRecord* A, LogRecord* B);
  int tamanhoVetor;

  unsigned long long int contTroca;
  unsigned long long int contComp;
  LogRecord** vetor;
#endif
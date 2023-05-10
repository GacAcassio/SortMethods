// guardas de cabeçalho, impedem inclusões cíclicas
#ifndef dados_H   
#define dados_H

 // declaração de um contador global
extern unsigned long long int contChamadas = 10;  

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
                  
#endif
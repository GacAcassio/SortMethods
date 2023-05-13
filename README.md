# SortMethods

Instituto de Engenharia Universidade Federal de Mato Grosso
Algoritmos e Estrutura de Dados
Prof. Frederico S. Oliveira
1 Introdu¸c˜ao
Neste trabalho, seu objetivo ´e realizar uma an´alise de desempenho de diversos algoritmos de ordena¸c˜ao em
diferentes cen´arios. Para tal, vocˆe dever´a compar´a-los levando em considera¸c˜ao trˆes m´etricas: o n´umero de
compara¸c˜oes, o n´umero de trocas realizadas e o tempo total gasto para ordena¸c˜ao, considerando apenas o
tempo de processamento. Esta an´alise ser´a fundamental para determinar a eficiˆencia de cada algoritmo de
ordena¸c˜ao e identificar qual deles ´e mais adequado para cada cen´ario espec´ıfico.
2 Cen´ario
Vocˆe foi contratado por uma empresa para solucionar um problema de organiza¸c˜ao dos registros de log de
um programa espec´ıfico, a fim de facilitar a an´alise desses dados. Nessa empresa, um sistema gera uma
grande quantidade de logs que s˜ao armazenados de forma desordenada. Sua tarefa ´e criar um sistema para
organiz´a-los. Cada registro de log ´e composto por uma data e um numero de identifica¸c˜ao (ID) do processo
que o gerou. Para avaliar a eficiˆencia dos algoritmos de ordena¸c˜ao, ´e necess´ario criar vetores compostos
por registros de log. Os registros de logs devem ser ordenados primeiro pelo ID do processo e, em seguida,
pela data de registro. Al´em de avaliar o comportamento dos algoritmos ao lidar com registros de log
totalmente aleat´orios, vocˆe tamb´em deve avaliar o comportamento ao ordenar com registros de logs que j´a
est˜ao ordenados, primeiro em ordem crescente e, em seguida, em ordem decrescente. Para medir o tempo
de processamento na linguagem C, utilize o comando clock() conforme apresentado em sala de aula.
Os registros de log na empresa s˜ao armazenados na seguinte estrutura:
// Defini¸c~ao da struct que representa um registro de log
typedef struct {
int year;
int month;
int day;
int hour;
int minute;
int second;
int process_id; // id do processo
} LogRecord;
Vocˆe dever´a implementar os algoritmos de ordena¸c˜ao por compara¸c˜ao (apresentados em sala de aula)
que devem receber como entrada um vetor contendo os registros de log a serem ordenados e o n´umero de
registros presentes no vetor. Para gera¸c˜ao dos registros de log, utilize a fun¸c˜ao a seguir:
// Funcao para gerar um registro de log
LogRecord* generateLogRecord() {
// Aloca um registros de log
LogRecord *logRecordUnit = malloc(sizeof( LogRecord));
if (logRecordUnit == NULL) {
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
Os seguintes algoritmos de ordena¸c˜ao por compara¸c˜ao devem ser analisados:
 bubblesort
 insertionsort
 selectionsort
 shellsort
 mergesort
 heapsort
 quicksort
.
Ademais, para fins comparativos, vocˆe deve implementar no m´ınimo outros trˆes algoritmos de ordena¸c˜ao.
Vocˆe pode usar varia¸c˜oes dos algoritmos j´a estudados em aula, mas ´e necess´ario que explique como cada
algoritmo escolhido funciona e sua fonte.
Cada algoritmo de ordena¸c˜ao deve estar implementado em um arquivo separado. Na fun¸c˜ao main() deve
existir um menu que permita escolher qual algoritmo de ordena¸c˜ao ser´a utilizado, qual o tamanho de n e o
formato dos registros de log (crescente, decrescente ou aleat´orio).
Caso o teste de algum dos m´etodos de ordena¸c˜ao torne-se invi´avel por algum motivo, como por exemplo
o valor de n ser muito grande, informe nos resultados o motivo da inviabilidade.
2.1 An´alise
Para comparar a eficiˆencia dos algoritmos de ordena¸c˜ao, ´e necess´ario submetˆe-los a testes utilizando entradas de diferentes tamanhos. E recomendado testar os algoritmos com diversos valores de ´ n, sendo este o
parˆametro que representa o tamanho do conjunto de dados a ser ordenado. Algumas sugest˜oes de valores
para n s˜ao:
 100.000
 300.000
 500.000
 700.000
 1.000.000
 2.000.000
 5.000.000
Durante os testes, os algoritmos devem ser comparados entre si usando as seguintes m´etricas:
 tempo total gasto na ordena¸c˜ao;
 n´umero de compara¸c˜oes, e
 n´umero de trocas.
Al´em disso, para cada valor de n, realize testes com as seguintes entradas:
 vetor com registros de log aleat´orios;
 vetor com registros de log em ordem crescente;
 vetor com registros de log em ordem decrescente.
2.2 Resultados
Para avaliar os algoritmos, deve-se utilizar os seguintes gr´aficos:
 tempo de execu¸c˜ao vs tamanho do vetor
 quantidade de trocas vs tamanho do vetor
 quantidade de compara¸c˜oes vs tamanho do vetor
Ou seja, a ideia ´e executar cada algoritmo para diferentes tamanhos de vetores de registros de log e comparar
as m´etricas para cada um deles. Discuta seus resultados avaliando o desempenho relativo dos algoritmos, sua
complexidade assint´otica (nota¸c˜ao Big-O) e identificando quais dos algoritmos tˆem uma melhor escalabilidade
para vetores de registros de log maiores.
3 Documenta¸c˜ao
Obrigatoriamente a documenta¸c˜ao deve conter:
1. Introdu¸c˜ao: descri¸c˜ao do problema a ser resolvido e vis˜ao geral sobre o funcionamento do programa.
2. Desenvolvimento: descri¸c˜ao do funcionamento das principais fun¸c˜oes e procedimentos utilizados, o
formato de entrada e sa´ıda de dados, bem como decis˜oes tomadas relativas aos casos e detalhes de
especifica¸c˜ao que por ventura estejam omissos no enunciado.
3. Compila¸c˜ao e Execu¸c˜ao: descri¸c˜ao de como como compilar o c´odigo-fonte, bem como a sua execu¸c˜ao.
4. Testes: descri¸c˜ao de quais testes foram executados e as sa´ıdas obtidas.
5. Conclus˜ao: coment´arios gerais sobre o trabalho e as principais dificuldades encontradas em sua implementa¸c˜ao.
6. Bibliografia: bibliografia utilizada para o desenvolvimento do trabalho, incluindo livros e/ou sites da
internet se for o caso, seguindo padr˜ao ABNT.
4 Material a ser Entregue
Os seguintes itens devem ser enviados via Ambiente Virtual de Aprendizagem (AVA), em um ´unico arquivo
compactado, com extens˜ao “.zip”:
 C´odigo fonte do programa em C, bem identado e comentado. O c´odigo-fonte, bem como os testes de
sua execu¸c˜ao, valem 50% da nota.
 Documenta¸c˜ao do trabalho, que deve ser entregue mandatoriamente no formato PDF. A documenta¸c˜ao
vale 50% da nota.
5 Conclus˜ao
Para c´alculo da nota, ser˜ao realizados testes, e a nota ser´a calculada com base nestes testes. Ser´a atribu´ıdo
zero aos seguintes casos:
 C´odigo-fonte n˜ao compilar no Linux.
 Nenhum teste for executado com sucesso.
 N˜ao apresentar documenta¸c˜ao.
 Pl´agio.
Este trabalho deve ser desenvolvido de forma individual ou em dupla. N˜ao ser˜ao realizadas exce¸c˜oes.
Bom trabalho.

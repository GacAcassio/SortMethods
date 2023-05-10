CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: main

main: 	main.c 	dados/compMaior.c dados/generateLogRecord.c	algoritmos/bubbleSort.c	dados/dados.h
	$(CC)	$(CFLAGS) main.c 	dados/compMaior.c dados/generateLogRecord.c	algoritmos/bubbleSort.c -o	main	

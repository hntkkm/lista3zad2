# makefile

all: main

main: main.o rozwiazania.o
	clang -o  main main.o -lm rozwiazania.o

main.o: main.c
	clang -c main.c
rozwiazania.o: rozwiazania.c
	clang -c -lm rozwiazania.c
clean:
	rm -rozwiazania main *.o*~

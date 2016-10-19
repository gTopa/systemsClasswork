GCC = gcc -g

all: list.o main.o
	$(GCC) list.o main.o -o ltest

list.o: list.c list.h

main.o: main.c list.h
	$(GCC) -c main.c

clean:
	rm*.o
	rm *~

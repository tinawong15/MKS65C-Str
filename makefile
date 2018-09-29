all: str.o main.o
	gcc str.o main.o

str.o: str.c str.h
	gcc -c str.c

main.o: main.c str.h
	gcc -c main.c

run:
	./a.out

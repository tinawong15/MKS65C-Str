all: main.o

main.o: str.c str.h
	gcc str.c

run:
	./a.out

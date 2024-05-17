all: main

exec: main.o
	gcc main.o -o a.out

compile: main.c graphs.h
	gcc -c main.c -o main.o

run: main
	./a.out "0,1;1,0"
	./a.out "0,1,0;0,0,1;0,0,0"
	./a.out "0,1,0,0;0,0,1,0;0,0,0,1;1,0,0,0"

clean:
	rm -f *.o main

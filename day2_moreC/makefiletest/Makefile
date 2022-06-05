run: a.out 
	./a.out

a.out: hw.o add.o
	gcc hw.o add.o

hw.o: hw.c
	gcc -c hw.c
add.o: add.c
	gcc -c add.c

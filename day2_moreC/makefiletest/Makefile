run: a.out  # run is the target, and it depends of a.out
	./a.out # command to execute to make run

a.out: hw.o add.o
	gcc hw.o add.o

hw.o: hw.c
	gcc -c hw.c # -c option means to compile and make .o, but don't make a.out
add.o: add.c
	gcc -c add.c
clean: 
	/bin/rm *.o a.out

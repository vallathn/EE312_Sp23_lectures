# Author: Vallath Nandakumar
# Created: June 3, 2016
# This is a sample makefile.  The targets are run, a.out, hw.s, and hw.o.
# The order is unimportant, and I have made it more or less random here
# in this file.

# 'make -n <target>' will show the commands that will be run to make the 
# target.

# 'make run' will make a.out, and run it.
run: a.out
	./a.out

# 'make a.out' will compile hw.o, the object file
a.out: hw.o
	gcc hw.o

# 'make hw.s' will generate assembly code 
hw.s: hw.c
	gcc -S hw.c

# 'make hw.o' will generate an object file 
hw.o: hw.c
	gcc -c hw.c

clean: 
	/bin/rm -f hw.o a.out hw.s

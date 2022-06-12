
# https://gcc.gnu.org/onlinedocs/gcc/Preprocessor-Options.html
preprocess: includefile.c included.h
	gcc -E includefile.c > includefile.preprocessed

a.out: includefile.c included.h
	gcc includefile.c

run: a.out
	./a.out

clean:
	/bin/rm -f *.o *.preprocessed a.out

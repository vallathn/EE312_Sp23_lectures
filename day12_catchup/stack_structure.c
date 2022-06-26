int foo (char a []);

int main () {
	int a = 5;
	int b = 6;
	char s [] = "Hello";
	int count = foo(s);
	return 0;
}

int foo (char a [] )  {
	int count = 0;
	// code to count letters in string
	return count;
}

Addresses decrease towards the bottom.

___________________________________   main
return int of main
________________________
4 bytes of a
________________________
4 bytes of b
________________________
 X   X  '\0' 'o'
________________________
'l' 'l' 'e' 'H'
________________________
4 bytes of count
________________________

....
....
_____________________________________   foo
return value of foo
________________________
pointer to 'H' (parameter of foo)
________________________
4 bytes of count
________________________
....
....
________________________

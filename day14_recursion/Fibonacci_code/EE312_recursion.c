// EE312_recursion.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>

// Recursive Fibonacci series
long unsigned fib_recursive(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fib_recursive(n - 1) + fib_recursive(n - 2);
}

// Non-Recursive Fibonacci series
long unsigned fib_iterative(int n) {
	if (n == 0)				// 1
		return 0;
	if (n == 1)				// 1
		return 1;
	long unsigned prev = 0;	// 2
	long unsigned prev_prev = 1;
	long unsigned current = 1;
	long unsigned fib;

	while (current <= n) {		// n - 2
		current++;				// 2
		fib = prev + prev_prev;		// 2
		prev_prev = prev;			// 1
		prev = fib;			// 1
	}
	return fib;				// 1
}

int main()
{
	int n = 10; // The array size.  If > 50, becomes impossibly slow.
	printf("Iterative: %lu\n", fib_iterative(n));
	printf("Recursive: %lu\n", fib_recursive(n));
	printf("Iterative: %lu\n", fib_iterative(10000));
	printf("Recursive: %lu\n", fib_recursive(47));
	//overflow (10000000);

    return 0;
}


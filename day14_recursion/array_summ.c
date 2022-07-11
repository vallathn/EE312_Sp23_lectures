#include <stdio.h>
int print_sum(int a [], size_t size) {
	if (size == 0)
		return 0;
	// call print_sum with smaller and smaller sizes of the array
	// use the solution from the smaller size call to print_sum to get
	// the solution to the original problem (or the larger one).
	int sum = a[0] + print_sum(a + 1, size - 1);
	return sum;
}


int main () {
	int a [] = {1, 2, 3};
	int sum = print_sum(a, 3);
	printf("sum = %d\n", sum);

	int b [] = {};
	sum = print_sum(b, 0);
	printf("sum = %d\n", sum);

	int c [1000000];
	sum = print_sum(c, 1000000);
	return 0;
}

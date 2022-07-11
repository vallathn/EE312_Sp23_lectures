// subsetSum.cpp : Defines the entry point for the console application.
//

#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
typedef unsigned int uint;

int sumsTo(uint x[], uint n, uint k, uint v);

int main()
{
	uint n = 5; 
	uint x[] = { 1, 8, 6, 4, 3 };
	uint k = 2; uint v = 13;
	int result = sumsTo(x, n, k, v);
	printf("k = %d, v = %d, Result should be: %d, got %d. %s\n", k, v, 0, result, result == 0 ? "PASS" : "FAIL");

	 k = 3;  v = 13;
	 result = sumsTo(x, n, k, v);
	printf("k=%d, v=%d, Result should be: %d, got %d. %s\n", k, v, 1, result, result == 1 ? "PASS" : "FAIL");

	 k = 2;  v = 9;
	 result = sumsTo(x, n, k, v);
	printf("k=%d, v=%d, Result should be: %d, got %d. %s\n", k, v, 1, result, result == 1 ? "PASS" : "FAIL");

	 k = 3;  v = 9;
	 result = sumsTo(x, n, k, v);
	printf("k=%d, v=%d, Result should be: %d, got %d. %s\n", k, v, 0, result, result == 0 ? "PASS" : "FAIL");

	k = 3;  v = 0;
	result = sumsTo(x, n, k, v);
	printf("k=%d, v=%d, Result should be: %d, got %d. %s\n", k, v, 0, result, result == 0 ? "PASS" : "FAIL");

	k = 0;  v = 0;
	result = sumsTo(x, n, k, v);
	printf("k=%d, v=%d, Result should be: %d, got %d. %s\n", k, v, 1, result, result == 1 ? "PASS" : "FAIL");

	k = 1;  v = 6;
	result = sumsTo(x, n, k, v);
	printf("k=%d, v=%d, Result should be: %d, got %d. %s\n", k, v, 1, result, result == 1 ? "PASS" : "FAIL");
	return 0;
}

// Day 15, SubsetSum
int sumsTo(uint x[], uint n, uint k, uint v) {
	// printf("x[0], n, k, v: %d, %d, %d, %d\n", x[0], n, k, v);
	if (v == 0 && k == 0)	// used up all numbers to reach sum 0
		return true;
	if (v!=0 && k == 0)		// used up all numbers without reaching sum 0
		return false;
	if (n == 0)				// all numbers in array done, but did not use k numbers
		return false;
	int res1 = 0;
	if (v >= x[0])
		res1 = sumsTo(x + 1, n - 1, k -1, v - x[0]);	// include the first number of the array in the sum
	int res2 = sumsTo(x + 1, n - 1, k, v);				// exclude the first number in the sum
	if (res1 + res2 > 0)
		return true;
	return false;
}



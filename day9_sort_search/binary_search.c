#include <stdio.h>

// main.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binary_search(int arr[], size_t size, int n) {

    int start = 0; // 1
    int end = size - 1; // 1
    int mid; // 1

    while (start <= end) { // ??? = log(size)
        mid = (start + end) / 2; // 1 x no of iterations of while loop
        if (n == arr[mid]) return mid; //  1 x no of iterations of while loop
        if (n < arr[mid]) { // 1/2 same
            end = mid - 1; // 1/2 same
            continue; // 1/2 same
        }
        else start = mid + 1; // 1/2 same
    }
    return -1; // 1
}

// initialize array with odd numbers in increasing sequence
void initialize(int* arr, size_t size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 2 * i + 1;
	}
}

int linear_search(int* arr, size_t size, int to_be_found) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == to_be_found)
            return i;
    }
    return -1;
}

int main()
{
	const size_t SIZE = 10;
	int a[SIZE] = { 2, 3, 4,  8, 9, 12, 18, 19, 20, 30 };
	int expected = -1;

	/* search for search_term in array */
	int search_term = 0; // not found
	int found = binary_search(a, SIZE, search_term);
	expected = -1;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

	search_term = 2; // at 0
	found = binary_search(a, SIZE, search_term);
	expected = 0;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

	search_term = 5; // not found
	found = binary_search(a, SIZE, search_term);
	expected = -1;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

	search_term = 8; // at 3
	found = binary_search(a, SIZE, search_term);
	expected = 3;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

	search_term = 30; // at 9
	found = binary_search(a, SIZE, search_term);
	expected = 9;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

	search_term = 31; // not found
	found = binary_search(a, SIZE, search_term);
	expected = -1;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

	/* Checking big arrays */
	const long BIG = 1000000000L; // 1 billion element array
	int* arr;
	arr = (int*)malloc(BIG * sizeof(int));
	initialize(arr, BIG);
	time_t t1, t2;
	clock_t ct1, ct2;

	search_term = 30; // will not be found.
	ct1 = clock();
	long i = 100000L; // 100,000
	while (i--) { // run loop BIG times
		found = binary_search(arr, BIG, search_term);
	}
	ct2 = clock();

	printf("CLOCKS_PER_SEC is %ld\n", CLOCKS_PER_SEC);
	double duration = ((double)(ct2 - ct1)) / CLOCKS_PER_SEC;
	printf("Time taken for binary search with 1,000,000,000 elements, 100,000 times %f sec\n", duration);

	printf("Should be %d, found %d\n", -1, found);

    search_term = BIG - 1; // not found
    ct1 = clock();
    i = 10L;
    while (i--) { // run loop BIG times
        found = linear_search(arr, BIG, search_term);
    }
    ct2 = clock();

    printf("ct1 %ld\n", ct1);
    printf("ct2 %ld\n", ct2);
    printf("CLOCKS_PER_SEC is %ld\n", CLOCKS_PER_SEC);
    duration = ((double)(ct2 - ct1)) / CLOCKS_PER_SEC;
    printf("Time taken for linear search with 1,000,000,000 elements, 10 times %f sec\n", duration);


	return 0;
}

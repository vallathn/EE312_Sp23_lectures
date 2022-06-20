#include <stdio.h>

// main.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binary_search(int arr[], size_t size, int n) {

    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;
        if (n == arr[mid]) return mid;
        if (n < arr[mid]) {
            end = mid - 1;
            continue;
        }
        else start = mid + 1;
    }
    return -1;
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

    // Part 1: TEST CASES FOR BINARY SEARCH
	int search_term = 0; // not found
	int found = binary_search(a, SIZE, search_term);
	expected = -1;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

	search_term = 2; // 0
	found = binary_search(a, SIZE, search_term);
	expected = 0;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

	search_term = 5; // not found
	found = binary_search(a, SIZE, search_term);
	expected = -1;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

	search_term = 8; // 3
	found = binary_search(a, SIZE, search_term);
	expected = 3;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

	search_term = 30; // 9
	found = binary_search(a, SIZE, search_term);
	expected = 9;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

	search_term = 31; // not found
	found = binary_search(a, SIZE, search_term);
	expected = -1;
	printf("Should be %d, found %d", expected, found);
	printf(" \t%s\n", expected == found ? "PASSED" : "FAILED");

    /* Part 2: CHECKING TIME TAKEN FOR LINEARY AND BINARY SEARCHES */
	const long BIG = 1000000000L;
	int* arr;
	arr = (int*)malloc(BIG * sizeof(int));
	initialize(arr, BIG); // initialize big array
	time_t t1, t2;
	clock_t ct1, ct2;

    // Binary search time measurement
	search_term = 30; // will not be found, after search of whole array.
	ct1 = clock();
	long i = 100000L; // run binary search i times
    // First run i binary_searches through the array of size = BIG.
	while (i--) { // run loop BIG times
		found = binary_search(arr, BIG, search_term);
	}
	ct2 = clock();

	printf("CLOCKS_PER_SEC is %ld\n", CLOCKS_PER_SEC);
	double duration = ((double)(ct2 - ct1)) / CLOCKS_PER_SEC;
	printf("Time taken for binary search with 1,000,000,000 elements, 100,000 times %f sec\n", duration);

	//printf("DEBUG: Should be %d, found %d\n", -1, found);

    // Linear search
    search_term = BIG - 1; // not found
    ct1 = clock();
    i = 10L;
    printf("Doing linear search %d times on array of size %li\n", i, BIG);
    while (i--) { // run loop i (BIG) times
        found = linear_search(arr, BIG, search_term);
    }
    ct2 = clock();

    //printf("ct1 %ld\n", ct1);
    //printf("ct2 %ld\n", ct2);
    //printf("CLOCKS_PER_SEC is %ld\n", CLOCKS_PER_SEC);
    duration = ((double)(ct2 - ct1)) / CLOCKS_PER_SEC;
    printf("Time taken for linear search with %li elements, 10 times %f sec\n", BIG, duration);

	return 0;
}

// main.cpp : Defines the entry point for the console application.
//
/*
 * This program searches for a given value in an array using
 * the binary search method.  Returns the index of the value, or
 * -1 if not found.
 * Find the bug.
 */

#include <stdio.h>

int binary_search2(int arr[], int start, int end, int n) {

	int mid = 0;
	while (start <= end) {
		mid = (start + end) / 2;
		if (n == arr[mid]) return mid;
		if (n < arr[mid]) {
			end = mid - 1;
			break;
		}
		else start = mid + 1;
	}
	return -1;
}

int binary_search(int arr[], size_t size, int n) {
	return binary_search2(arr, 0, size - 1, n);
}

int main()
{
	const size_t SIZE = 10;
	int a[SIZE] = { 2, 3, 4,  8, 9, 12, 18, 19, 20, 30 };

	int search_term = 0; // not found
	int found = binary_search(a, SIZE, search_term);
	printf("Should be %d, found %d\n", -1, found);

	search_term = 2; // 0
	found = binary_search(a, SIZE, search_term);
	printf("Should be %d, found %d\n", 0, found);

	search_term = 5; // not found
	found = binary_search(a, SIZE, search_term);
	printf("Should be %d, found %d\n", -1, found);

	search_term = 8; // 3
	found = binary_search(a, SIZE, search_term);
	printf("Should be %d, found %d\n", 3, found);

	search_term = 30; // 9
	found = binary_search(a, SIZE, search_term);
	printf("Should be %d, found %d\n", 9, found);

	search_term = 31; // not found
	found = binary_search(a, SIZE, search_term);
	printf("Should be %d, found %d\n", -1, found);

	return 0;
}

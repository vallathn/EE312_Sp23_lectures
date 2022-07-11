// EE312_day14_binary_search.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>

int binary_search2(int arr[], int start, int end, int n) {

	if (start > end) return -1;
	int mid = (end + start) / 2;
	if (n == arr[mid]) return mid;
	if (n < arr[mid])
		return binary_search2(arr, start, mid-1, n);
	return binary_search2(arr, mid + 1, end, n);
}

int binary_search(int arr[], int size,  int n) {
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

    // s_overflow();
    //so2();

    return 0;
}


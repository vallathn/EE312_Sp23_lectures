
#include <stdio.h>

void printArray(int* arr, size_t size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");

}

void reverse (int* arr, int size) {
	// base case
	if (size == 0) return;
	printf("%d ", arr[size - 1]);
	reverse (arr, size - 1);
}

void reverse_and_return (int* arr, int size, int* out) {
	// base case
	if (size == 0) return;
	out[0] = arr[size - 1];
	reverse_and_return (arr, size - 1, out + 1);
}

int main () {
	int arr [] = {2, 4, 6, 8};
	reverse (arr, 4);

	int out [4];
	reverse_and_return (arr, 4, out);
	printArray(out, 4);
}

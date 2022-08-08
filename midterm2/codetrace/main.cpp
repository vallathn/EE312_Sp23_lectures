#include <iostream>

int minPos(int arr [], uint32_t size ) {
    if (size == 1)
        return 0;
    int min = 1 + minPos(arr + 1, size - 1);
    return arr[0] < arr[min] ? 0 : min;
}

void selectionSort(int arr[], uint32_t size) {
    if (size <= 1)
        return;
    int min = minPos(arr, size);
    if (arr[0] > arr[min]) { // swap
        int tmp = arr[0];
        arr[0] = arr[min];
        arr[min] = tmp;
    }
    selectionSort(arr + 1, size - 1);
}

void print(int arr [], uint32_t size ) {
    putchar('[');
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
int main() {
    int arr1 [5] = { 8, -7, 7, 8, 9};
    printf("%d\n", minPos(arr1, 5));

    selectionSort(arr1, 5);
    print(arr1, 5);
}

#include <stdio.h>
int binary_search (int arr [], size_t size, int n) {
    // pre: arr is sorted, and not null
    int start = 0;
    int end = size -1;

    while (start <= end) {
        int mid = (start + end)/2;
        if (n == arr[mid])
            return mid;
        if (n < arr[mid]) {
            start = start;
            end = mid - 1;
        }
        else {
            start = mid + 1;
            end = end;
        }
    }
    return -1;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}


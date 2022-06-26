#include <stdio.h>
#include <stdlib.h>

// Merge elements from a and b. Do not duplicate.

void print(int* a, size_t l) {
    putchar('[');
    int first = 1;
    for (int i = 0; i < l; i++) {
        if (first)
            printf("%d", a[i]);
        else
            printf(", %d", a[i]);
        first = 0;
    }
    putchar(']');
}

void merge (int* a, size_t a_size, int* b, size_t b_size, int** mergedp, int* m_size) {
    int* merged = (int*)malloc(a_size + b_size);

    int i = 0; int j = 0;
    int ind = 0;
    // Merge the two arrays.
    while (i < a_size && j < b_size) {	//If a's element < b's
        if (a[i] < b[j]) {
            merged[ind] = a[i];
            ind++;
            i++;
        }
        else if (a[i] > b[j]) {
            merged[ind] = b[j]; // if b's element < a's
            ind++;
            j++;
        }
        else {
            a[i] = b[j]; // if a's element = b's
            merged[ind] = b[j];
            ind++;
            i++;
            j++;
        }
    }

    if (i == a_size) {
        while (j < b_size) {
            merged[ind] = b[j];
            j++;
            ind++;
        }
    } else if (j == b_size) {
        while (i < a_size) {
            merged[ind] = a[i];
            i++;
            ind++;
        }
    }
    *m_size = ind;
    *mergedp = merged;
}

int main() {
    int a [] = {1, 3, 5, 7};
    int b [] = {2, 3, 4, 6, 8, 10};
    print(a, 4);
    print(b, 6);
    int* mergedp;
    int m_size;
    merge(a, 4, b, 6, &mergedp, &m_size);
    print(mergedp, m_size);
    puts("");
    free(mergedp);
    mergedp = 0;

    int c [] = {};
    int d [] = {1, 2};
    print(c, 0);
    print(d, 2);
    merge(c, 0, d, 2, &mergedp, &m_size);
    print(mergedp, m_size);
    return 0;
}
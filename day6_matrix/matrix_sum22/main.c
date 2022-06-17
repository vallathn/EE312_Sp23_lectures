#include <stdio.h>
#include <stdlib.h>

void print_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d\t", matrix[i][j]);
        puts("");
    }
    puts("");

}
void lost_pointer_example() {
    int* ptr = (int*)malloc(10);
}

void free_matrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++)
        free(matrix[i]);
    free(matrix);
}

int main() {
    int rows = 3;
    int cols = 10;
    int** matrix = (int**)malloc(rows*sizeof(int*)); // allocate space for 3 row pointers
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols*sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * rows + j;
        }
    }
    print_matrix(matrix, rows, cols);
    free_matrix(matrix, rows, cols);

    int* matrix_stack = (int*)malloc(rows*cols*(sizeof(int )));
    free(matrix_stack);
    lost_pointer_example();
    return 0;
}

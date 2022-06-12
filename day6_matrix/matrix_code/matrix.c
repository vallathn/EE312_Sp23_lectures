#include <stdio.h>
#include <stdlib.h>

void printMatrix (double** matrix, int rows, int cols) {
    int r, c;
    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) {
//            printf("%g\t", *(matrix[r]+c));
            printf("%g\t", matrix[r][c]);
        }
        printf("\n");
    }
}

void twoDMatrix () {
    int mat [][2] = {{1, 2}, {3, 4}, {5, 6}};
    int* matrix_on_heap = (int*)malloc(sizeof(int)*6);

    for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 2; l++)
            matrix_on_heap[2*k + l] = l + k;
    }

    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", mat[i][j]);
        putchar('\n');
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++)
            printf("%p ", &(mat[i][j]));
        putchar('\n');
    }
    printf("%p %p %d\n", mat, *mat, **mat);
}

void initMatrix (double** matrix, int rows, int cols) {
    int r, c;
    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) {
            matrix[r][c] = r*cols + c;
        }
    }
}

int main() {

    int rows = 3;
    int cols = 2;
    int matrix_on_stack [] = {8, 2, 3, 4, 5, 6};
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < cols; col++) {
            printf("%d ", matrix_on_stack[row*2 + col]);
        }
        puts("");
    }
    puts("");

    rows = 4;
    cols = 3;
    int r;
    double** matrix = (double**)malloc(rows*sizeof(double*));
    for (r = 0; r < rows; r++) {
        double* col = (double*)malloc(cols*sizeof(double));
        matrix[r] = col;
    }
    initMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    for (r = 0; r < rows; r++) {
        free(matrix[r]);
        matrix[r] = 0;
    }
    free(matrix);
    //free(matrix + 1); // unallocated memory error
    //free(matrix); // double delete error
    matrix = 0;
    free(matrix);

    return 0;
}
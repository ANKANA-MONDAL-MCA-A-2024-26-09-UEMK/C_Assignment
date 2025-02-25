#include <stdio.h>

#define MAX_SIZE 10 // Define a maximum size for the matrices

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE], int rowsA, int colsA, int rowsB, int colsB) {
    // Initialize the resulting matrix to zero
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
        }
    }

    // Perform multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
    int rowsA, colsA, rowsB, colsB;

    // Input dimensions for the first matrix
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rowsA, &colsA);

    // Input dimensions for the second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rowsB, &colsB);

    // Check if multiplication is possible
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible. Number of columns of A must equal number of rows of B.\n");
        return 1;
    }

    // Input the first matrix
    printf("Matrix A:\n");
    inputMatrix(A, rowsA, colsA);

    // Input the second matrix
    printf("Matrix B:\n");
    inputMatrix(B, rowsB, colsB);

    // Multiply the matrices
    multiplyMatrices(A, B, C, rowsA, colsA, rowsB, colsB);

    // Output the result
    printf("Result of Matrix A * Matrix B:\n");
    printMatrix(C, rowsA, colsB);

    return 0;
}

/* OUTPUT :-
Enter the number of rows and columns for the first matrix: 2
2
Enter the number of rows and columns for the second matrix: 2
2
Matrix A:
Enter the elements of the matrix (2x2):
3
4
5
6
Matrix B:
Enter the elements of the matrix (2x2):
6
7
8
9
Result of Matrix A * Matrix B:
Matrix (2x2):
50 57
78 89          */


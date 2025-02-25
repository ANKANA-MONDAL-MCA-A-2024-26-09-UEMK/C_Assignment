#include <stdio.h>

#define MAX_SIZE 10 // Define a maximum size for the matrix

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int isSparseMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int zeroCount = 0;
    int totalElements = rows * cols;

    // Count the number of zero elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    // A matrix is considered sparse if more than half of its elements are zero
    return (zeroCount > totalElements / 2);
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input the matrix
    inputMatrix(matrix, rows, cols);

    // Check if the matrix is sparse
    if (isSparseMatrix(matrix, rows, cols)) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}

/* OUTPUT :-
Enter the number of rows and columns for the matrix: 2
3
Enter the elements of the matrix (2x3):
2
0
0
0
3
0
The matrix is a sparse matrix.       */

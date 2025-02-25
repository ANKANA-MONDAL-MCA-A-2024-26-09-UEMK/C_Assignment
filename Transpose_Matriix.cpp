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

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int transposed[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE], transposed[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input the matrix
    inputMatrix(matrix, rows, cols);

    // Transpose the matrix
    transposeMatrix(matrix, transposed, rows, cols);

    // Output the original and transposed matrices
    printMatrix(matrix, rows, cols);
    printMatrix(transposed, cols, rows); // Note the rows and cols are swapped

    return 0;
}


/* OUTPUT :-
Enter the number of rows and columns for the matrix: 2
3
Enter the elements of the matrix (2x3):
2
3
4
5
6
7
Matrix (2x3):
2 3 4
5 6 7
Matrix (3x2):
2 5
3 6
4 7           */

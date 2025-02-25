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

void calculateSums(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int rowSums[MAX_SIZE] = {0}; // Array to store sums of each row
    int colSums[MAX_SIZE] = {0}; // Array to store sums of each column

    // Calculate row sums and column sums
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
            colSums[j] += matrix[i][j];
        }
    }

    // Print row sums
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    // Print column sums
    printf("Sum of each column:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSums[j]);
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input the matrix
    inputMatrix(matrix, rows, cols);

    // Output the original matrix
    printMatrix(matrix, rows, cols);

    // Calculate and display the sums
    calculateSums(matrix, rows, cols);

    return 0;
}

/* OUTPUT :-
Enter the number of rows and columns for the matrix: 2
3
Enter the elements of the matrix (2x3):
2
4
6
8
9
3
Matrix (2x3):
2 4 6
8 9 3
Sum of each row:
Row 1: 12
Row 2: 20
Sum of each column:
Column 1: 10
Column 2: 13
Column 3: 9          */

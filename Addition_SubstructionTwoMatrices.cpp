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

void addMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], sum[MAX_SIZE][MAX_SIZE], difference[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    // Input the dimensions of the matrices
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Input the matrices
    printf("Matrix A:\n");
    inputMatrix(A, rows, cols);
    
    printf("Matrix B:\n");
    inputMatrix(B, rows, cols);

    // Perform addition and subtraction
    addMatrices(A, B, sum, rows, cols);
    subtractMatrices(A, B, difference, rows, cols);

    // Output the results
    printMatrix(A, rows, cols);
    printMatrix(B, rows, cols);
    printMatrix(sum, rows, cols);
    printMatrix(difference, rows, cols);

    return 0;
}

/* OUTPUT :-
Enter the number of rows and columns for the matrices: 2
2
Matrix A:
Enter the elements of the matrix (2x2):
2
3
4
5
Matrix B:
Enter the elements of the matrix (2x2):
2
2
3
4
Matrix (2x2):
2 3
4 5
Matrix (2x2):
2 2
3 4
Matrix (2x2):
4 5
7 9
Matrix (2x2):
0 1
1 1                 */

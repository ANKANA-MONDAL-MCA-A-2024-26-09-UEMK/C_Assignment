#include <stdio.h>

#define MAX_SIZE 10 // Define a maximum size for the matrix

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    printf("Enter the elements of the matrix (%dx%d):\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int isIdentityMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                // Check diagonal elements
                if (matrix[i][j] != 1) {
                    return 0; // Not an identity matrix
                }
            } else {
                // Check non-diagonal elements
                if (matrix[i][j] != 0) {
                    return 0; // Not an identity matrix
                }
            }
        }
    }
    return 1; // It is an identity matrix
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    // Input the size of the square matrix
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &size);

    // Input the matrix
    inputMatrix(matrix, size);

    // Check if the matrix is an identity matrix
    if (isIdentityMatrix(matrix, size)) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}

/* OUTPUT :-
Enter the size of the matrix (n x n): 2
Enter the elements of the matrix (2x2):
1
0
0
1
The matrix is an identity matrix.        */

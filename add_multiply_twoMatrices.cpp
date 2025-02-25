#include <stdio.h>

#define MAX 10 // Maximum size of the matrix

// Function to add two matrices
void addMatrices(int (*a)[MAX], int (*b)[MAX], int (*result)[MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(*(result + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int (*a)[MAX], int (*b)[MAX], int (*result)[MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(*(result + i) + j) = 0; // Initialize result[i][j] to 0
            for (int k = 0; k < c1; k++) {
                *(*(result + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int (*matrix)[MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX], product[MAX][MAX];
    int r1, c1, r2, c2;

    // Input dimensions for the first matrix
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input elements for the first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input dimensions for the second matrix
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if the matrices can be added or multiplied
    if (r1 != r2) {
        printf("Matrices cannot be added due to incompatible dimensions.\n");
        return 1;
    }

    if (c1 != r2) {
        printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
        return 1;
    }

    // Input elements for the second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Adding the matrices
    addMatrices(a, b, sum, r1, c1);
    printf("\nSum of matrices:\n");
    printMatrix(sum, r1, c1);

    // Multiplying the matrices
    multiplyMatrices(a, b, product, r1, c1, c2);
    printf("\nProduct of matrices:\n");
    printMatrix(product, r1, c2);

    return 0;
}

/* OUTPUT :- 
Enter rows and columns for first matrix: 2
2
Enter elements of first matrix:
Element [0][0]: 1
Element [0][1]: 2
Element [1][0]: 3
Element [1][1]: 4
Enter rows and columns for second matrix: 2
2
Enter elements of second matrix:
Element [0][0]: 3
Element [0][1]: 4
Element [1][0]: 5
Element [1][1]: 6

Sum of matrices:
4 6
8 10

Product of matrices:
13 16
29 36

Enter rows and columns for first matrix: 2
3
Enter elements of first matrix:
Element [0][0]: 1
Element [0][1]: 2
Element [0][2]: 3
Element [1][0]: 4
Element [1][1]: 5
Element [1][2]: 6
Enter rows and columns for second matrix: 3
2
Matrices cannot be added due to incompatible dimensions.     */


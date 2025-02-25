#include <stdio.h>

#define ROWS 3
#define COLS 4

void printArray(int (*array)[COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", *(*(array + i) + j)); // Accessing elements using pointers
        }
        printf("\n");
    }
}

int main() {
    int array[ROWS][COLS]; // Declare a 2D array

    // Getting user input for the 2D array
    printf("Enter elements for a %dx%d array:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Displaying the array
    printf("\nThe 2D array is:\n");
    printArray(array, ROWS);

    return 0;
}


/* OUTPUT :-
Enter elements for a 3x4 array:
Element [0][0]: 1
Element [0][1]: 2
Element [0][2]: 3
Element [0][3]: 4
Element [1][0]: 6
Element [1][1]: 7
Element [1][2]: 8
Element [1][3]: 9
Element [2][0]: 2
Element [2][1]: 5
Element [2][2]: 4
Element [2][3]: 3

The 2D array is:
1 2 3 4
6 7 8 9
2 5 4 3     */

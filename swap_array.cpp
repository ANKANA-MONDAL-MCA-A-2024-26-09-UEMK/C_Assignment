#include <stdio.h>

void swapArrays(int *array1, int *array2, int size) {
    for (int i = 0; i < size; i++) {
        // Swap elements using a temporary variable
        int temp = *(array1 + i);
        *(array1 + i) = *(array2 + i);
        *(array2 + i) = temp;
    }
}

int main() {
    int size;

    // Asking user for the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];

    // Getting user input for the first array
    printf("Enter %d elements for the first array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Getting user input for the second array
    printf("Enter %d elements for the second array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Swapping the arrays
    swapArrays(array1, array2, size);

    // Displaying the swapped arrays
    printf("\nAfter swapping:\n");
    printf("First Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array1[i]);
    }
    printf("\nSecond Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}

/* OUTPUT :-
Enter the size of the arrays: 4
Enter 4 elements for the first array:
Element 1: 1
Element 2: 2
Element 3: 3
Element 4: 4
Enter 4 elements for the second array:
Element 1: 4
Element 2: 5
Element 3: 6
Element 4: 7

After swapping:
First Array: 4 5 6 7
Second Array: 1 2 3 4   */


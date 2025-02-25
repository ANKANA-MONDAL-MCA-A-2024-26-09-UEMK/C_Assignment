#include <stdio.h>

int searchElement(int *array, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*(array + i) == target) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int size, target, index;

    // Asking user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size]; // Declare the array

    // Getting user input for the array
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Asking user for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Searching the element in the array
    index = searchElement(array, size, target);

    // Displaying the result
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}


/* OUTPUT :-
Enter the size of the array: 4
Enter 4 elements for the array:
Element 1: 1
Element 2: 2
Element 3: 3
Element 4: 4
Enter the element to search: 3
Element 3 found at index 2.   */

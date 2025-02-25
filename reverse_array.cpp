#include <stdio.h>

void reverseArray(int *array, int size) {
    int *start = array;           // Pointer to the start of the array
    int *end = array + size - 1; // Pointer to the end of the array
    int temp;

    while (start < end) {
        // Swap the values at start and end
        temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards the center
        start++;
        end--;
    }
}

int main() {
    int size;

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

    // Reversing the array
    reverseArray(array, size);

    // Displaying the reversed array
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}


/* OUTPUT :-
Enter the size of the array: 5
Enter 5 elements for the array:
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
Element 5: 6
Reversed Array: 6 5 4 3 2	 */

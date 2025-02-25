#include <stdio.h>

void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i); // Copying elements using pointers
    }
}

int main() {
    int size;

    // Asking user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int sourceArray[size]; // Declare the source array
    int destinationArray[size]; // Declare the destination array

    // Getting user input for the source array
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &sourceArray[i]);
    }

    // Copying the source array to the destination array
    copyArray(sourceArray, destinationArray, size);

    // Displaying the copied array
    printf("Copied Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");

    return 0;
}


/* OUTPUT :-
Enter the size of the array: 4
Enter 4 elements for the array:
Element 1: 10
Element 2: 30
Element 3: 50
Element 4: 60
Copied Array: 10 30 50 60 */

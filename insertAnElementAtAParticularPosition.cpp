#include <stdio.h>

#define MAX_SIZE 100 // Define the maximum size of the array

int main() {
    int arr[MAX_SIZE], n, i, pos, value;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position and the value to be inserted
    printf("Enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Check if the position is valid
    if (pos < 0 || pos > n) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n);
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = value;

    // Update the size of the array
    n++;

    // Print the updated array
    printf("\nUpdated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


/* OUTPUT :-
Enter the number of elements in the array (max 100): 4
Enter 4 elements:
3
4
5
6
Enter the position to insert the element (0 to 4): 2
Enter the value to insert: 8

Updated array:
3 4 8 5 6      */

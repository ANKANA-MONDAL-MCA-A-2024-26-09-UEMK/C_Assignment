#include <stdio.h>

#define MAX_SIZE 100 // Define the maximum size of the array

int main() {
    int arr[MAX_SIZE], n, i, pos;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to be deleted
    printf("Enter the position of the element to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos < 0 || pos >= n) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n - 1);
        return 1;
    }

    // Shift elements to the left to fill the gap
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Update the size of the array
    n--;

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
5
6
7
8
Enter the position of the element to delete (0 to 3): 2

Updated array:
5 6 8                      */

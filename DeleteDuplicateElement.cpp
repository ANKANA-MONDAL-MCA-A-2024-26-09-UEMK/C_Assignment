#include <stdio.h>

void deleteDuplicates(int arr[], int *n) {
    int temp[*n]; // Temporary array to hold unique elements
    int j = 0; // Index for temp array

    for (int i = 0; i < *n; i++) {
        int isDuplicate = 0;

        // Check if arr[i] is already in temp
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                isDuplicate = 1;
                break;
            }
        }

        // If it's not a duplicate, add it to temp
        if (!isDuplicate) {
            temp[j] = arr[i];
            j++;
        }
    }

    // Copy unique elements back to original array
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    // Update the size of the original array
    *n = j;
}

int main() {
    int n;

    // Prompt user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to delete duplicates
    deleteDuplicates(arr, &n);

    // Output the unique elements
    printf("Array after deleting duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/* OUTPUT :- 
Enter the number of elements in the array: 5
Enter 5 elements: 10
55
45
55
35
Array after deleting duplicates: 10 55 45 35     */


#include <stdio.h>

int main() {
    int n;

    // Prompt user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Check if there are enough elements
    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    // Declare the array
    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the first and second highest
    int highest = arr[0];
    int second_highest = -1; // Using -1 to indicate that it may not be set

    // Find the highest and second highest
    for (int i = 1; i < n; i++) {
        if (arr[i] > highest) {
            second_highest = highest; // Update second highest
            highest = arr[i]; // Update highest
        } else if (arr[i] > second_highest && arr[i] != highest) {
            second_highest = arr[i]; // Update second highest
        }
    }

    // Output the result
    if (second_highest == -1) {
        printf("There is no second highest number (all elements might be the same).\n");
    } else {
        printf("The second highest number is: %d\n", second_highest);
    }

    return 0;
}

/* OUTPUT :-
Enter the number of elements in the array: 5
Enter 5 elements: 23
34
45
56
71
The second highest number is: 56      */

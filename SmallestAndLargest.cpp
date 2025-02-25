#include <stdio.h>

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

    // Initialize smallest and largest with the first element
    int smallest = arr[0];
    int largest = arr[0];

    // Traverse the array to find smallest and largest
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the results
    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    return 0;
}

/* OUTPUT :-

Enter the number of elements in the array: 5
Enter 5 elements: 12
23
24
35
10
Smallest element: 10
Largest element: 35             */

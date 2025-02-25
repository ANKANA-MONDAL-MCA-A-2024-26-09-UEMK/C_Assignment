#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Prompt user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    bubbleSort(arr, n);

    // Output the sorted array
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/* OUTPUT :-
Enter the number of elements: 5
Enter 5 elements: 3
1
8
2
9
Sorted array in ascending order: 1 2 3 8 9       */

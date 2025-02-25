#include <stdio.h>

int main() {
    int n, search, found = 0;

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

    // Prompt user for the element to search
    printf("Enter the element to search for: ");
    scanf("%d", &search);

    // Search for the element in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at index %d.\n", search, i);
            found = 1;
            break; // Exit loop if the element is found
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}

/* OUTPUT :-
Enter the number of elements in the array: 4
Enter 4 elements: 3
5
7
9
Enter the element to search for: 7
Element 7 found at index 2.            */

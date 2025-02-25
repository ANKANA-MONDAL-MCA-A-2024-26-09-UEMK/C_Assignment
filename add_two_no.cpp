#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptrSum;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Initialize pointers to the addresses of the variables
    ptr1 = &num1;
    ptr2 = &num2;
    ptrSum = &sum;

    // Perform addition using pointers
    *ptrSum = *ptr1 + *ptr2;

    // Output the result
    printf("The sum of %d and %d is %d \n",*ptr1, *ptr2, *ptrSum);

    return 0;
}

/*OUTPUT :-
Enter the first number: 5
Enter the second number: 7
The sum of 5 and 7 is 12  */


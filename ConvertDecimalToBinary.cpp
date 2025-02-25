#include <stdio.h>

#define MAX_BITS 32 // Maximum bits for storing binary representation

int main() {
    int decimal, i = 0;
    int binary[MAX_BITS]; // Array to store binary digits

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2; // Store the remainder (0 or 1)
        decimal = decimal / 2;    // Divide the number by 2
        i++;
    }

    // Print the binary representation
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) { // Print in reverse order
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

/* OUTPUT :- 
Enter a decimal number: 34
Binary representation: 100010    */

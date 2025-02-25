#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int length = strlen(binary);
    
    for (int i = 0; i < length; i++) {
        // Convert character '0' or '1' to integer 0 or 1
        if (binary[length - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }
    
    return decimal;
}

int main() {
    char binary[65];  // Array to hold a binary number (up to 64 bits + null terminator)

    printf("Enter a binary number: ");
    scanf("%64s", binary);  // Read a string input safely

    // Validate input: Check if it contains only '0's and '1's
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary number!\n");
            return 1;
        }
    }

    int decimal = binaryToDecimal(binary);
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

/* OUTPUT :-
Enter a binary number: 11001
Decimal equivalent: 25        */

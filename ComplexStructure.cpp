#include <stdio.h>

typedef struct {
    float real;   // Real part
    float imag;   // Imaginary part
} complex;

// Function to add two complex numbers
complex add(complex a, complex b) {
    complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
complex subtract(complex a, complex b) {
    complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Function to display a complex number
void display(complex c) {
    if (c.imag >= 0) {
        printf("%.2f + %.2fi\n", c.real, c.imag);
    } else {
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    }
}

int main() {
    complex num1, num2, sum, difference;

    // Read first complex number
    printf("Enter first complex number (real and imaginary parts): ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Read second complex number
    printf("Enter second complex number (real and imaginary parts): ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Perform addition and subtraction
    sum = add(num1, num2);
    difference = subtract(num1, num2);

    // Display results
    printf("\nSum: ");
    display(sum);
    
    printf("Difference: ");
    display(difference);

    return 0;
}

/* OUTPUT :-
Enter first complex number (real and imaginary parts): 3.5 2.5
Enter second complex number (real and imaginary parts): 1.5 4.5

Sum: 5.00 + 7.00i
Difference: 2.00 - 2.00i         */

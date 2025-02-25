#include <stdio.h>

int main() {
    // Declaration of variables
    int a = 10;
    float b = 20.5;
    char c = 'X';

    // Declaration and initialization of pointers
    int *ptr_a;
    float *ptr_b;
    char *ptr_c;

    // Assigning addresses to pointers
    ptr_a = &a;
    ptr_b = &b;
    ptr_c = &c;
    
    printf("Value of a: %d\n", *ptr_a); 
    printf("Value of b: %.2f\n", *ptr_b); 
    printf("Value of c: %c\n", *ptr_c);
    
    return 0;
}

/*OUTPUT :-
Value of a: 10
Value of b: 20.50
Value of c: X */

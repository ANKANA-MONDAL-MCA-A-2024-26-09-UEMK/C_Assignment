#include <stdio.h>

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array to store marks
    float marks[n];

    // Input marks for each student
    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    // Print the marks
    printf("\nMarks of students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %.2f\n", i + 1, marks[i]);
    }

    return 0;
}


/*OUTPUT :-
Enter the number of students: 4
Enter marks for student 1: 89
Enter marks for student 2: 78
Enter marks for student 3: 85
Enter marks for student 4: 88

Marks of students:
Student 1: 89.00
Student 2: 78.00
Student 3: 85.00
Student 4: 88.00               */

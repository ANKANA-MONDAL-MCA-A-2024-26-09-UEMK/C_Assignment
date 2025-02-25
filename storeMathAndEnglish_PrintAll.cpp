#include <stdio.h>

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create arrays to store marks
    float mathMarks[n];
    float englishMarks[n];
    float totalMarks[n];

    // Input marks for each student
    for (int i = 0; i < n; i++) {
        printf("Enter Mathematics marks for student %d: ", i + 1);
        scanf("%f", &mathMarks[i]);
        printf("Enter English marks for student %d: ", i + 1);
        scanf("%f", &englishMarks[i]);

        // Calculate total marks
        totalMarks[i] = mathMarks[i] + englishMarks[i];
    }

    // Print total marks for each student
    printf("\nTotal marks of students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: Total Marks = %.2f\n", i + 1, totalMarks[i]);
    }

    return 0;
}


/*  OUTPUT :- 
Enter the number of students: 5
Enter Mathematics marks for student 1: 70
Enter English marks for student 1: 80
Enter Mathematics marks for student 2: 85
Enter English marks for student 2: 95
Enter Mathematics marks for student 3: 90
Enter English marks for student 3: 78
Enter Mathematics marks for student 4: 76
Enter English marks for student 4: 75
Enter Mathematics marks for student 5: 79
Enter English marks for student 5: 74

Total marks of students:
Student 1: Total Marks = 150.00
Student 2: Total Marks = 180.00
Student 3: Total Marks = 168.00
Student 4: Total Marks = 151.00
Student 5: Total Marks = 153.00    */

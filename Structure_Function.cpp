#include <stdio.h>

#define MAX_STUDENTS 12

typedef struct {
    int rollNo;
    char name[100];
    char address[200];
    int age;
    float marks;
} Student;

void readStudentDetails(Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // Consume newline character left by scanf

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

void displayStudentDetails(const Student students[], int count) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < count; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s", students[i].name);
        printf("Address: %s", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

int main() {
    Student students[MAX_STUDENTS];

    // Read student details
    readStudentDetails(students, MAX_STUDENTS);

    // Display student details
    displayStudentDetails(students, MAX_STUDENTS);

    return 0;
}

/* OUTPUT :-
Enter details for student 1:
Roll No: 2
Name: abc
Address: pqr
Age: 22
Marks: 79

Enter details for student 2:
Roll No: 3
Name: rst
Address: efg
Age: 23
Marks: 87

Enter details for student 3:
Roll No: 4
Name: xyz
Address: dsf
Age: 26
Marks: 90

Enter details for student 4:
Roll No: 8
Name: jkl
Address: rfc
Age: 27
Marks: 8

Enter details for student 5:
Roll No: 9
Name: xzc
Address: bnm
Age: 28
Marks: 92

Enter details for student 6:
Roll No: 1
Name: asd
Address: wqe
Age: 21
Marks: 88

Enter details for student 7:
Roll No: 12
Name: vnn
Address: dcy
Age: 19
Marks: 76

Enter details for student 8:
Roll No: 14
Name: eds
Address: tcg
Age: 22
Marks: 89

Enter details for student 9:
Roll No: 51
Name: ttt
Address: yyy
Age: 30
Marks: 94

Enter details for student 10:
Roll No: 17
Name: eee
Address: fff
Age: 34
Marks: 99

Enter details for student 11:
Roll No: 33
Name: ccs
Address: bbb
Age: 38
Marks: 98

Enter details for student 12:
Roll No: 37
Name: zzz
Address: mmm
Age: 32
Marks: 95

Student Details:

Student 1:
Roll No: 2
Name: abc
Address: pqr
Age: 22
Marks: 79.00

Student 2:
Roll No: 3
Name: rst
Address: efg
Age: 23
Marks: 87.00

Student 3:
Roll No: 4
Name: xyz
Address: dsf
Age: 26
Marks: 90.00

Student 4:
Roll No: 8
Name: jkl
Address: rfc
Age: 27
Marks: 8.00

Student 5:
Roll No: 9
Name: xzc
Address: bnm
Age: 28
Marks: 92.00

Student 6:
Roll No: 1
Name: asd
Address: wqe
Age: 21
Marks: 88.00

Student 7:
Roll No: 12
Name: vnn
Address: dcy
Age: 19
Marks: 76.00

Student 8:
Roll No: 14
Name: eds
Address: tcg
Age: 22
Marks: 89.00

Student 9:
Roll No: 51
Name: ttt
Address: yyy
Age: 30
Marks: 94.00

Student 10:
Roll No: 17
Name: eee
Address: fff
Age: 34
Marks: 99.00

Student 11:
Roll No: 33
Name: ccs
Address: bbb
Age: 38
Marks: 98.00

Student 12:
Roll No: 37
Name: zzz
Address: mmm
Age: 32
Marks: 95.00  */


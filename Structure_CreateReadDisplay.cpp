#include <stdio.h>

struct company {
    char name[100];
    char address[200];
    char phone[15];
    int noOfEmployees;
};

int main() {
    struct company comp;

    // Read company details
    printf("Enter the name of the company: ");
    fgets(comp.name, sizeof(comp.name), stdin);

    printf("Enter the address of the company: ");
    fgets(comp.address, sizeof(comp.address), stdin);

    printf("Enter the phone number of the company: ");
    fgets(comp.phone, sizeof(comp.phone), stdin);

    printf("Enter the number of employees: ");
    scanf("%d", &comp.noOfEmployees);

    // Display company details
    printf("\nCompany Details:\n");
    printf("Name: %s", comp.name);
    printf("Address: %s", comp.address);
    printf("Phone: %s", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployees);

    return 0;
}

/* OUTPUT :-
Enter the name of the company: tcs
Enter the address of the company: sector5
Enter the phone number of the company: 9988776655
Enter the number of employees: 80

Company Details:
Name: tcs
Address: sector5
Phone: 9988776655
Number of Employees: 80 */


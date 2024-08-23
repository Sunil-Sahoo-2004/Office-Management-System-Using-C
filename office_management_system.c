#include <stdio.h>
#include<string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    char name[50];
    int id;
    int age;
    float salary;
    int attendance;
};

void addEmployee(struct Employee employees[], int *numEmployees) {
    if (*numEmployees == MAX_EMPLOYEES) {
        printf("Maximum number of employees reached.\n");
        exit(0);
    }

    struct Employee newEmployee;
    printf("Enter employee name: ");
    scanf("%s", newEmployee.name);
    printf("Enter employee ID: ");
    scanf("%d", &newEmployee.id);
    printf("Enter employee age: ");
    scanf("%d", &newEmployee.age);
    printf("Enter employee salary: ");
    scanf("%f", &newEmployee.salary);
    printf("Enter employee attendance: ");
    scanf("%d", &newEmployee.attendance);

    employees[*numEmployees] = newEmployee;
    (*numEmployees)++;

    printf("Employee added successfully.\n");
}

void displayEmployees(struct Employee employees[], int numEmployees) {
    printf("Employee Details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("\n\n");
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Attendance: %d\n", employees[i].attendance);
        printf("----------------------\n\n");
    }
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int numEmployees = 0;
    int choice;
    printf("THE PROJECT IS MADE BY SUNIL SAHOO | ID - 2213986051 | DEPARTMANT - BCA \n\n");

    do {
        printf("\nOffice Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &numEmployees);
                break;
            case 2:
                displayEmployees(employees, numEmployees);
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

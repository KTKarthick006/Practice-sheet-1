#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct employee {
    int empid;
    char empname[50];
    float salary;
};

void searchEmployeeById(struct employee employees[], int n) {
    int empId, i;
    printf("Enter the Employee ID to search: ");
    scanf("%d", &empId);

    for (i = 0; i < n; i++) {
        if (employees[i].empid == empId) {
            printf("Employee Found!\n");
            printf("Employee ID: %d\n", employees[i].empid);
            printf("Employee Name: %s\n", employees[i].empname);
            printf("Employee Salary: %.2f\n", employees[i].salary);
            return;
        }
    }

    printf("Employee not found with ID: %d\n", empId);
}

void displayAllEmployees(struct employee employees[], int n) {
    int i;
    printf("All Employees:\n");
    for (i = 0; i < n; i++) {
        printf("Employee ID: %d\n", employees[i].empid);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Employee Salary: %.2f\n", employees[i].salary);
        printf("--------------------\n");
    }
}

void displayEmployeesWithSalaryGreaterThan(struct employee employees[], int n, float salary) {
    int i;
    printf("Employees with Salary > %.2f:\n", salary);
    for (i = 0; i < n; i++) {
        if (employees[i].salary > salary) {
            printf("Employee ID: %d\n", employees[i].empid);
            printf("Employee Name: %s\n", employees[i].empname);
            printf("Employee Salary: %.2f\n", employees[i].salary);
            printf("--------------------\n");
        }
    }
}

int main() {
    struct employee employees[MAX_EMPLOYEES];
    int n, i, choice;
    float salaryThreshold;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].empid);
        printf("Employee Name: ");
        scanf("%s", employees[i].empname);
        printf("Employee Salary: ");
        scanf("%f", &employees[i].salary);
        printf("--------------------\n");
    }

    do {
        printf("\nMenu:\n");
        printf("1. Search Employee by ID\n");
        printf("2. Display All Employees\n");
        printf("3. Display Employees with Salary > 10000\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                searchEmployeeById(employees, n);
                break;
            case 2:
                displayAllEmployees(employees, n);
                break;
            case 3:
                displayEmployeesWithSalaryGreaterThan(employees, n, 10000.0);
                break;
            case 4:
                printf("Thank you\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

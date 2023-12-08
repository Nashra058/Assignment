#include <stdio.h>

#define MAX_EMPLOYEES 100

typedef struct Employee {
  char name[50];
  int salary;
} Employee;

int main() {
  int n, given_salary;
  Employee employees[MAX_EMPLOYEES];

  // Get the number of employees
  printf("Enter the number of employees: ");
  scanf("%d", &n);

  // Get employee details
  for (int i = 0; i < n; i++) {
    printf("Enter employee %d details:\n", i + 1);
    printf("Name: ");
    scanf("%s", employees[i].name);
    printf("Salary: ");
    scanf("%d", &employees[i].salary);
  }

  // Get the given salary
  printf("Enter the given salary: ");
  scanf("%d", &given_salary);

  // Print details of employees with salary less than given salary
  printf("Employees with salary less than %d:\n", given_salary);
  for (int i = 0; i < n; i++) {
    if (employees[i].salary < given_salary) {
      printf("Name: %s\n", employees[i].name);
      printf("Salary: %d\n", employees[i].salary);
    }
  }

  return 0;
}
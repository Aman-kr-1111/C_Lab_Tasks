#include <stdio.h>
int main()
{
  float id, salary;
  char name[50], designation[50];
  printf("Enter employee name: ");
  scanf("%s", &name);
  printf("Enter employee ID: ");
  scanf("%f", &id);
  printf("Enter employee designation: ");
  scanf("%s", &designation);
  printf("Enter employee salary: ");
  scanf("%f", &salary);

  printf("\nEmployee Details\n");
  printf("Name: %s\n", name);
  printf("Employee ID: %.0f\n", id);
  printf("Designation: %s\n", designation);
  printf("Salary: $%.2f\n", salary);
  return 0;
}
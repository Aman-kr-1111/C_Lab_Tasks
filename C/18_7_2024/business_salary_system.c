#include <stdio.h>
int main()
{
  char emp_type;
  float bs, ts, bonus;

  printf("Enter employee type ('M' for manager, 'H' for HR employee) : ");
  scanf("%c", &emp_type);
  printf("Enter Basic salary : ");
  scanf("%f", &bs);

  bonus = emp_type == 'M' || emp_type == 'm' ? bs * 0.05 : 0;

  ts = bs + bonus;
  printf("Total Salary : %.2f", ts);
  return 0;
}
#include <stdio.h>
int main()
{
  int unit;
  float bill;
  printf("Enter the electricity units consumed : ");
  scanf("%d", &unit);

  if (unit > 0 && unit <= 50)
  {
    bill = unit * 0.50;
  }
  else if (unit > 0 && unit <= 150)
  {
    bill = 50 * 0.50 + 0.75 * (unit - 50);
  }
  else if (unit > 0 && unit <= 250)
  {
    bill = 50 * 0.50 + 0.75 * 100 + 1.20 * (unit - 150);
  }
  else if (unit > 0 && unit > 250)
  {
    bill = 50 * 0.50 + 0.75 * 100 + 1.20 * 100 + 1.50 * (unit - 250);
  }
  else
  {
    puts("Invalid input");
    return 0;
  }

  bill += bill * 0.20;
  printf("Total electricity bill : %.2f", bill);

  return 0;
}
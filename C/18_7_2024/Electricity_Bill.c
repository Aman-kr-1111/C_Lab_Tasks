#include <stdio.h>
int main()
{
  float units, rate, total_bill;
  printf("Enter number of units consumed : ");
  scanf("%f", &units);

  rate = units > 100 ? 4.50 : 3.00;
  total_bill = units * rate;
  printf("\nConsumed units : %.2f\n", units);
  printf("Total Bill : %.2f\n", total_bill);
  return 0;
}
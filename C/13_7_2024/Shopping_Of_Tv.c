#include <stdio.h>
int main()
{
  float cp = 3500;
  float p = cp * 27 / 100;
  float sp = cp + p;
  float vat = sp * 12.7 / 100;
  float service_charge = sp * 3.87 / 100;
  float total = sp + vat + service_charge;

  printf("Profit = %.2f", p);
  printf("\nVAT = %.2f", vat);
  printf("\nService charge = %.2f", service_charge);
  printf("\nTotal Selling Price = %.2f", total);

  return 0;
}
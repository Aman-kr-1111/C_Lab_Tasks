#include <stdio.h>
int main()
{
  float f, c;
  printf("Enter temperature in Fahrenheit : ");
  scanf("%f", &f);
  c = (f - 32) * (5.0 / 9.0);
  printf("%.2f Fahrenheit is %.2f Celsius.", f, c);
  return 0;
}
#include <stdio.h>
int main()
{
  float c;
  printf("Enter your number in centimeter : ");
  scanf("%f", &c);
  printf("%.2f", c / 2.54);
  return 0;
}
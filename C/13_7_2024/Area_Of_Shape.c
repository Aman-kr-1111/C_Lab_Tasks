#include <stdio.h>
int main()
{
  float radius, side;
  printf("Enter radius of Circle : ");
  scanf("%f", &radius);
  printf("Enter side of Square : ");
  scanf("%f", &side);

  printf("Area of Circle is : %.2f", 3.14 * radius * radius);
  printf("\nArea of Square is : %.2f", side * side);
  return 0;
}
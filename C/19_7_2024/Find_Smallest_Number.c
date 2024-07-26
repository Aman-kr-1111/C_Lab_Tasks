#include <stdio.h>
int main()
{
  int num1, num2, num3, small;
  printf("Enter your 1st number : ");
  scanf("%d", &num1);
  printf("Enter your 2nd number : ");
  scanf("%d", &num2);
  printf("Enter your 3rd number : ");
  scanf("%d", &num3);

  // small = num1 > num2 ? num2 > num3 ? num3 : num2 : num1>num3?num3:num1;

  small = num1 < num2 && num1 < num3 ? num1 : num2 < num3 ? num2  : num3;

  printf("%d is smallest number", small);
  return 0;
}
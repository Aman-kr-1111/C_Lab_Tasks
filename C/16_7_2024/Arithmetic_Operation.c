#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  printf("%d + %d = %d\n", num1, num2, num1 + num2);
  printf("%d - %d = %d\n", num1, num2, num1 - num2);
  printf("%d * %d = %d\n", num1, num2, num1 * num2);
  printf("%d / %d = %d", num1, num2, num1 / num2);
  return 0;
}
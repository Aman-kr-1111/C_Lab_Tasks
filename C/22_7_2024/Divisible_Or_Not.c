#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  if (num1 % num2 == 0)
  {
    printf("%d is divisible by %d", num1, num2);
  }
  else
  {
    printf("%d isn't divisible by %d", num1, num2);
  }

  return 0;
}
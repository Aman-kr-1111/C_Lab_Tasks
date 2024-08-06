#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  for (int i = num1 < num2 ? num1 : num2; i; i--)//
  {
    if (num1 % i == 0 && num2 % i == 0)
    {
      printf("The HCF of %d and %d is %d", num1, num2, i);
      return 0;
    }
  }

  return 0;
}
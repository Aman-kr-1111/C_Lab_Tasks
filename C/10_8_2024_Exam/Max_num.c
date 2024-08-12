#include <stdio.h>

int main()
{
  int num1, num2;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  switch (num1 > num2)
  {
  case 1:
    printf("%d is max", num1);
    break;

  case 0:
    switch (num1 == num2)
    {
    case 1:
      printf("Both are equal");
      break;

    default:
      printf("%d is max", num2);
      break;
    }
  }
  return 0;
}
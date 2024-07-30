#include <stdio.h>
int main()
{
  int num1, num2, max;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  switch (num1 > num2)
  {
  case 0:
    switch (num1 != num2)
    {
    case 0:
      puts("Both are equal");
      break;
    default:
      printf("%d greater than %d", num2, num1);
      break;
    }
    break;
  default:
    printf("%d greater than %d", num1, num2);
    break;
  }
  return 0;
}
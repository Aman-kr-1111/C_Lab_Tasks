#include <stdio.h>
int main()
{
  int num;
  printf("Enter your number : ");
  scanf("%d", &num);

  switch (num % 2 == 0)
  {
  case 1:
    printf("%d is an Even number", num);
    break;

  default:
    printf("%d is an Odd number", num);
    break;
  }
  return 0;
}
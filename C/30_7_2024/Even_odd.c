#include <stdio.h>
int main()
{
  int num;
  printf("Enter your number : ");
  scanf("%d", &num);

  switch (num % 2)
  {
  case 0:
    printf("%d is an even number", num);
    break;
  default:
    printf("%d is an odd number", num);
    break;
  }
  return 0;
}
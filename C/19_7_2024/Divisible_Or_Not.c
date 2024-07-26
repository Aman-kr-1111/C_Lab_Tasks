#include <stdio.h>
int main()
{
  int num;
  printf("Enter your number : ");
  scanf("%d", &num);

  num % 5 == 0 && num % 11 == 0 ? printf("%d is divisible 5 and 11", num) : printf("%d is not divisible 5 and 11", num);
  return 0;
}
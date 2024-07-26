#include <stdio.h>
int main()
{
  int num, last_digit;
  printf("Enter your number : ");
  scanf("%d", &num);

  last_digit = num % 10;
  if (last_digit < 5)
  {
    printf("Ans = %d", num * num);
  }
  else
  {
    printf("Ans = %d", num);
  }

  return 0;
}
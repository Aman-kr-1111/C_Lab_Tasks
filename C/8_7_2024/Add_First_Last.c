#include <stdio.h>
int main()
{
  int num, first_digit, last_digit;
  printf("Enter your number : ");
  scanf("%d", &num);
  first_digit = num % 10;
  last_digit = num / 100;

  printf("%d", first_digit + last_digit);
  return 0;
}
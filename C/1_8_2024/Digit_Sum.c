#include <stdio.h>
int main()
{
  int num, digit_sum = 0;
  printf("Enter three-digit number : ");
  scanf("%d", &num);

  while (num)
  {
    digit_sum += num % 10;
    num /= 10;
  }
  printf("Sum of the digits : %d", digit_sum);

  return 0;
}
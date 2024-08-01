#include <stdio.h>
int main()
{
  int num, digit_count = 0;
  printf("Enter a number : ");
  scanf("%d", &num);

  while (num)
  {
    digit_count++;
    num /= 10;
  }
  printf("Count of the digits is : %d", digit_count);

  return 0;
}
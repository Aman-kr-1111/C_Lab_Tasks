#include <stdio.h>
int main()
{
  int num, sum1 = 0, sum2 = 0;
  printf("Enter your number : ");
  scanf("%d", &num);
  while (num)
  {
    sum1 += num % 10;
    num /= 10;
    sum2 += num % 10;
    num /= 10;
  }

  if (sum1 == sum2)
  {
    printf("Alternate digit sum is same.");
  }
  else
  {
    printf("Alternate digit sum isn't same.");
  }

  return 0;
}
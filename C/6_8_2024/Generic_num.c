#include <stdio.h>
int main()
{
  int num, sum;
  printf("Enter your number : ");
  scanf("%d", &num);

  while (num > 9 || num < -9)
  {
    sum = 0;
    while (num)
    {
      sum += num % 10;
      num /= 10;
    }
    num = sum;
  }

  printf("Generic number : %d", num);
  return 0;
}
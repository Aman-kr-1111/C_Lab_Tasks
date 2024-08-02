#include <stdio.h>
int main()
{
  int num, store_num, i = 1, sum = 0;
  printf("Enter your number : ");
  scanf("%d", &num);
  store_num = num;

  while (i < store_num)
  {
    if (store_num % i == 0)
    {
      sum += i;
    }
    i++;
  }

  if (sum == num)
  {
    printf("%d is a perfect number", num);
  }
  else
  {
    printf("%d isn't a perfect number", num);
  }

  return 0;
}
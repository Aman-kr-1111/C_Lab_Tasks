#include <stdio.h>
int main()
{
  int num, store_num, sum = 0;
  printf("Enter your number : ");
  scanf("%d", &num);
  store_num = num;

  for (int i = 1; i < store_num; i++)
  {
    if (store_num % i == 0)
    {
      sum += i;
    }
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
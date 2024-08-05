#include <stdio.h>
int main()
{
  int num, store_num, d1, d2, flag = 0;
  printf("Enter your number : ");
  scanf("%d", &num);
  store_num = num;
  d1 = num % 10;
  num /= 10;
  while (num)
  {
    d2 = num % 10;
    num /= 10;
    if (d1 - d2 == 1 || d2 - d1 == 1)
    {
      d1 = d2;
    }
    else
    {
      printf("%d isn't a step number", store_num);
      return 0;
    }
  }

  printf("%d is a step number", store_num);
  return 0;
}
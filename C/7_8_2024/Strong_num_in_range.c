#include <stdio.h>
#include <math.h>
int main()
{
  printf("Strong numbers : ");
  for (int i = 1; i <= 500; i++)
  {

    int store_num, digit_fact, digit, strong_num = 0;

    store_num = i;
    while (store_num)
    {
      digit_fact = 1;
      digit = store_num % 10;
      while (digit)
      {
        digit_fact *= digit--;
      }
      strong_num += digit_fact;
      store_num /= 10;
    }

    if (i == strong_num)
    {
      printf("%d ", i);
    }
  }

  return 0;
}
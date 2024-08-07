#include <stdio.h>
#include <math.h>
int main()
{

  printf("Armstrong numbers : ");
  for (int i = 100; i <= 999; i++)
  {
    int arms_num = 0, store_i = i;

    while (store_i)
    {
      arms_num += pow(store_i % 10, 3);
      store_i /= 10;
    }

    if (i == arms_num)
    {
      printf("%d ", i);
    }
  }

  return 0;
}
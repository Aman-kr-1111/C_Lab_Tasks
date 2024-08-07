#include <stdio.h>
int main()
{
  printf("Prime numbers : ");
  for (int i = 100; i <= 999; i++)
  {
    int flag = 1;
    for (int j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        flag = 0;
        break;
      }
    }
    if (flag)
    {
      printf("%d ", i);
    }
  }

  return 0;
}
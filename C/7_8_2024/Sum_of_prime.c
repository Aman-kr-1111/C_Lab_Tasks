#include <stdio.h>
int main()
{
  int num, store_num;
  printf("Enter your number : ");
  scanf("%d", &num);

  store_num = num;
  for (int i = 2; i <= num / 2; i++)
  {
    int flag = 1, sum1 = i;
    for (int j = 2; j <= sum1 / 2; j++)
    {
      if (sum1 % j == 0)
      {
        flag = 0;
        break;
      }
    }

    if (flag)
    {
      int sum2 = num - sum1;
      for (int k = 2; k <= sum2 / 2; k++)
      {
        if (sum2 % k == 0)
        {
          flag = 0;
          break;
        }
      }
      if (flag)
      {
        printf("%d + %d = %d\n", sum1, sum2, num);
      }
    }
  }

  return 0;
}
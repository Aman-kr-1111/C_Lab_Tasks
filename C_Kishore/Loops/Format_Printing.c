#include <stdio.h>
int main()
{
  int num;
  printf("Enter your number : ");
  scanf("%d", &num);

  // 12345678
  // 78 56 34 12
  if (num < 0)
  {
    num = -num;
    printf("-");
  }

  while (num)
  {
    if (num > 9 && num % 100 < 10)
    {
      printf("0");
    }
    printf("%d  ", num % 100);
    num /= 100;
  }

  return 0;
}
#include <stdio.h>
int main()
{
  int num;
  printf("Enter your number : ");
  scanf("%d", &num);

  for (int i = 2; i < num / 2; i++)
  {
    if (num % i == 0)
    {
      printf("%d isn't a Prime number", num);
      return 0;
    }
  }
  if (num == 0)
  {
    printf("%d is a Zero", num);
  }
  else
  {
    printf("%d is a Prime number", num);
  }

  return 0;
}
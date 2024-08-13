#include <stdio.h>
int main()
{
  int num, rem;
  printf("Enter your number : ");
  scanf("%d", &num);

  printf("Reverse number : ", num);
  if (num < 0)
  {
    num = -num;
    printf("-");
  }

  while (num)
  {
    rem = num % 10;
    printf("%d", rem);
    num /= 10;
  }

  return 0;
}
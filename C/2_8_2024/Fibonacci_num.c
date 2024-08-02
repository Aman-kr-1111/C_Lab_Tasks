#include <stdio.h>

int main()
{
  int num1 = 0, num2 = 1, term, nextTerm = 0;

  printf("Enter how many Fibonacci series you want : ");
  scanf("%d", &term);

  if (term >= 1)
  {
    printf("%d ", num1);
  }
  if (term >= 2)
  {
    printf("%d ", num2);
  }

  while (term-- > 2)
  {
    nextTerm = num1 + num2;
    num1 = num2;
    num2 = nextTerm;
    printf("%d ", nextTerm);
  }

  return 0;
}

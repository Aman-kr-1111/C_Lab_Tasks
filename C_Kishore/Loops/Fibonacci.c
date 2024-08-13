#include <stdio.h>
int main()
{
  int terms, num1 = 0, num2 = 1, next_num;
  printf("Enter number of terms : ");
  scanf("%d", &terms);

  while (terms--)
  {
    printf("%d ", num1);
    next_num = num1 + num2;
    num1 = num2;
    num2 = next_num;
  }

  return 0;
}
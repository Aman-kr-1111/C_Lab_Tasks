#include <stdio.h>
int naturalNumberSum(int);
int main()
{
  int num;
  printf("Enter number : ");
  scanf("%d", &num);

  printf("The sum of %d natural numbers %d", num, naturalNumberSum(num));
  return 0;
}

int naturalNumberSum(int num)
{
  return (num * (num + 1)) / 2;
}

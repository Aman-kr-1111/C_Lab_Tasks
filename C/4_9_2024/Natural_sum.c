#include <stdio.h>
int Natural_sum(int);
int main()
{
  int num;
  printf("Enter number : ");
  scanf("%d", &num);

  printf("The sum of %d natural numbers %d", num, Natural_sum(num));
  return 0;
}

int Natural_sum(int num)
{
  return (num * (num + 1)) / 2;
}

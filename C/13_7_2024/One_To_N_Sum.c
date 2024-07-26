#include <stdio.h>
int main()
{
  int num, sum;
  printf("Enter your number : ");
  scanf("%d", &num);
  sum = num * (num + 1) / 2;
  printf("The sum of natural numbers 1 to %d is : %d", num, sum);
  return 0;
}
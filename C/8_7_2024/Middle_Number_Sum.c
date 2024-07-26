#include <stdio.h>
int main()
{
  int num, r1, r2;
  printf("Enter your number : ");
  scanf("%d", &num);
  num /= 10;
  r1 = num % 10;
  num /= 10;
  r2 = num % 10;
  printf("output = %d", r1 + r2);
  return 0;
}
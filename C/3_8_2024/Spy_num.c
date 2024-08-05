#include <stdio.h>
int main()
{
  int num, store_num, digit, sum = 0, product = 1;
  printf("Enter your number : ");
  scanf("%d", &num);
  store_num = num;
  while (num)
  {
    digit = num % 10;
    sum += digit;
    product *= digit;
    num /= 10;
  }

  if (sum == product)
  {
    printf("%d is a Spy number", store_num);
  }
  else
  {
    printf("%d isn't a Spy number", store_num);
  }

  return 0;
}
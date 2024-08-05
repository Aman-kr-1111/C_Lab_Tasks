#include <stdio.h>
int main()
{
  int num, store_num, digit, sum = 0, product = 1;
  printf("Enter your number : ");
  scanf("%d", &num);
  store_num = num * num;
  while (store_num)
  {
    digit = store_num % 10;
    sum += digit;
    store_num /= 10;
  }

  if (num == sum)
  {
    printf("%d is a Neon number", num);
  }
  else
  {
    printf("%d isn't a Neon number", num);
  }

  return 0;
}
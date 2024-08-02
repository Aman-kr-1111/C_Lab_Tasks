#include <stdio.h>
int main()
{
  int num, store_num, digit_fact, digit, strong_num = 0;
  printf("Enter your number : ");
  scanf("%d", &num);
  store_num = num;
  while (store_num)
  {
    digit_fact = 1;
    digit = store_num % 10;
    while (digit)
    {
      digit_fact *= digit--;
    }
    strong_num += digit_fact;
    store_num /= 10;
  }

  if (num == strong_num)
  {
    printf("%d is a strong number", num);
  }
  else
  {
    printf("%d isn't a strong number", num);
  }

  return 0;
}
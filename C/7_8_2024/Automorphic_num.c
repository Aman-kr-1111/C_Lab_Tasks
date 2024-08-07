#include <stdio.h>
int main()
{
  int num, store_num, square, flag = 1, count = 0;
  printf("Enter your number : ");
  scanf("%d", &num);

  square = num * num;
  store_num = num;

  while (store_num)
  {
    count++;
    store_num /= 10;
  }
  store_num = num;

  while (count--)
  {
    if (store_num % 10 != square % 10)
    {
      flag = 0;
      break;
    }
    store_num /= 10;
    square /= 10;
  }

  flag ? printf("%d is an Automorphic number", num) : printf("%d isn't an Automorphic number", num);

  return 0;
}
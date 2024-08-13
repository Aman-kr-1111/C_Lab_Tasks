#include <stdio.h>
#include <math.h>
int main()
{
  int num, store_num, armstrong_num = 0, power = 0, rem;
  printf("Enter your number : ");
  scanf("%d", &num);

  store_num = num;
  while (store_num)
  {
    power++;
    store_num /= 10;
  }

  store_num = num;
  while (store_num)
  {
    rem = store_num % 10;
    armstrong_num += pow(rem, power);
    store_num /= 10;
  }

  if (armstrong_num == num)
  {
    printf("%d is an Armstrong number", num);
  }
  else
  {
    printf("%d isn't an Armstrong number", num);
  }

  return 0;
}
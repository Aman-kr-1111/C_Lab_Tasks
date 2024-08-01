#include <stdio.h>
int main()
{
  int num, store_num, sum = 0;
  printf("Enter n value : ");
  scanf("%d", &num);
  store_num = num;
  while (num)
  {
    sum += num--;
  }
  printf("Sum of the natural number from 1 to %d : %d", store_num, sum);

  return 0;
}
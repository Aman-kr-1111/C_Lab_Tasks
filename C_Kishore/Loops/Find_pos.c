#include <stdio.h>
int main()
{
  int num, store_num, find_pos, count = 0;
  printf("Enter your number : ");
  scanf("%d", &num);
  printf("Enter finding digit : ");
  scanf("%d", &find_pos);

  store_num = num;
  do
  {
    count++;
    store_num /= 10;
  } while (store_num);
  store_num = num;
  do
  {
    if (store_num % 10 == find_pos)
    {
      printf("Position number = %d\n", count);
    }
    count--;
    store_num /= 10;
  } while (store_num);

  return 0;
}
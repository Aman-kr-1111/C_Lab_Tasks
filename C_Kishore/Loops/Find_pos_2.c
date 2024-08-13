#include <stdio.h>
int main()
{
  int num, rev_num = 0, find_digit, count = 0, flag = 1;
  printf("Enter your number : ");
  scanf("%d", &num);
  printf("Enter finding digit : ");
  scanf("%d", &find_digit);

  do
  {
    rev_num = rev_num * 10 + num % 10;
    num /= 10;
  } while (num);
  do
  {
    count++;
    if (rev_num % 10 == find_digit)
    {
      flag = 0;
      printf("%d in %d position\n", find_digit, count);
    }
    rev_num /= 10;
  } while (rev_num);

  if (flag)
  {
    printf("%d isn't found", find_digit);
  }

  return 0;
}
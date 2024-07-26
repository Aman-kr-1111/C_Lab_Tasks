#include <stdio.h>
int main()
{
  int num = 786, rem1, rem2, rev_num;
  rem1 = num % 10;
  num /= 10;
  rem2 = num % 10;
  num /= 10;
  rev_num = rem1 * 100 + rem2 * 10 + num;
  printf("Reverse number = %d", rev_num);

  return 0;
}
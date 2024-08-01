#include <stdio.h>
int main()
{
  int num, rev_num = 0, rem;
  printf("Enter a number : ");
  scanf("%d", &num);

  while (num)
  {
    rem = num % 10;
    rev_num = rev_num * 10 + rem;
    num /= 10;
  }
  printf("Reverse of the given number is : %d", rev_num);

  return 0;
}
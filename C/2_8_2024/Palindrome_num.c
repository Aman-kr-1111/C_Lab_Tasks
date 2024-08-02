#include <stdio.h>
int main()
{
  int num, store_num, rev_num = 0, rem;
  printf("Enter your number : ");
  scanf("%d", &num);
  store_num = num;

  while (store_num)
  {
    rem = store_num % 10;
    rev_num = rev_num * 10 + rem;
    store_num /= 10;
  }

  if (num == rev_num)
  {
    printf("%d is a Palindrome number", num);
  }
  else
  {
    printf("%d isn't a Palindrome number", num);
  }

  return 0;
}
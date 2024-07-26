#include <stdio.h>
int main()
{
  int num = 24;
  num % 10 >= 5 && printf("%d", ((num / 10) + 1) * 10) || printf("%d", num / 10 * 10);
  return 0;
}
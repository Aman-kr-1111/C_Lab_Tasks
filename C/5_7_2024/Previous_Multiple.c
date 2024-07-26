#include <stdio.h>
int main()
{
  int num = 234;
  num % 100 >= 50 && printf("%d", ((num / 100) + 1) * 100) || printf("%d", num / 100 * 100);
  return 0;
}
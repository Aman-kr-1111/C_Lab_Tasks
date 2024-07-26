#include <stdio.h>
int main()
{
  int num = 13;
  printf("%d", (num % 10) * 10 + num / 10);
  return 0;
}
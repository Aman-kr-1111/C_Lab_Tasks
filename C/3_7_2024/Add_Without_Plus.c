#include <stdio.h>
int main()
{
  int a = 1000, b = 2000, c;
  // c = a - (-b);
  // printf("c = %d", c);
  c = a - -b;
  printf("c = %d", c);
  return 0;
}
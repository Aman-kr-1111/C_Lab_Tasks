#include <stdio.h>
int main()
{
  int a = 10, b = 20, swap;
  printf("Before swapping a = %d and b = %d\n", a, b);
  swap = a;
  a = b;
  b = swap;
  printf("After swapping a = %d and b = %d", a, b);
  return 0;
}
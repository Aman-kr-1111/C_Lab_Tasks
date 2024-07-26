#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter 1st number : ");
  scanf("%d", &a);
  printf("Enter 2nd number : ");
  scanf("%d", &b);

  printf("a & b : %d\n", a & b);
  printf("a | b : %d\n", a | b);
  printf("a ^ b : %d\n", a ^ b);
  printf("~a : %d\n", ~a);
  printf("a << 1 : %d\n", a << 1);
  printf("a >> 1 : %d\n", a >> 1);
  return 0;
}
#include <stdio.h>
int main()
{
  int x, y;
  printf("Enter 1st number : ");
  scanf("%d", &x);
  printf("Enter 2nd number : ");
  scanf("%d", &y);

  printf("x == y : %d\n", x == y);
  printf("x != y : %d\n", x != y);
  printf("x > y : %d\n", x > y);
  printf("x < y : %d\n", x < y);
  printf("x >= y : %d\n", x >= y);
  printf("x <= 1 : %d\n", x <= 1);

  return 0;
}
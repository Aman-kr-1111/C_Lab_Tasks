#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  int *p1 = &num1, *p2 = &num2;

  printf("%d + %d = %d", *p1, *p2, *p1 + *p2);

  return 0;
}
#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  int *p1 = &num1, *p2 = &num2;

  *p1 > *p2 ? printf("%d is the maximum number", *p1) : *p1 < *p2 ? printf("%d is the maximum number", *p2) : printf("Both are equal");

  return 0;
}
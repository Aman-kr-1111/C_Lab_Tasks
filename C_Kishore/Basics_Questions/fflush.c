#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  fflush(stdin);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  printf("num1 = %d and num2 = %d", num1, num2);
  return 0;
}
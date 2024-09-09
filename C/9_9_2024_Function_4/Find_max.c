#include <stdio.h>
int max_num(int, int, int);
int main()
{
  int num1, num2, num3;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);
  printf("Enter 3rd number : ");
  scanf("%d", &num3);

  printf("%d is biggest number!!!", max_num(num1, num2, num3));

  return 0;
}
int max_num(int num1, int num2, int num3)
{
  int max;
  if (num1 > num2 && num1 > num3)
  {
    max = num1;
  }
  else if (num2 > num1 && num2 > num3)
  {
    max = num2;
  }
  else
  {
    max = num3;
  }
}